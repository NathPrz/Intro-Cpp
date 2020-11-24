//Programme pour gérer un panier
#include <iostream>
#include <string>
using namespace std;

//Fonction qui calcule et rajoute la TVA pour chaque accesoire.//
double calculePrixTTC(double prixHT)
{
    double tva = 0.2;
    return prixHT * (1 + tva);
}

//Fonction qui affiche les éléments des differents tableaux//
void afficherInfoTableaux(string nom, double prix, double prixTTC)
{
    cout << "L'accesoire " << nom << " cout " << prix << " EUR hors taxes et ";
    cout << prixTTC << " EUR TTC.\n";
}

int main()
{
    //Inisialisation des pointeurs
    string *accesoires = nullptr;
    double *prixHT = nullptr;
    double *prixTTC = nullptr;

    //Definition de la taille des tableaux à l'aide de l'utilisateur
    int quantiteDAccesoires;
    cout << "Bonjour! Combien d'accesoires voulez vous ajouter au panier?";
    cin >> quantiteDAccesoires;

    accesoires = new string[quantiteDAccesoires];
    prixHT = new double[quantiteDAccesoires];
    prixTTC = new double[quantiteDAccesoires];

    //Boucle qui demande à l'utilisateur les accesoires et leur prix pour inisialiser les tableaux
    cout << "Veuillez indiquer l'information qui suive pour chaque accesoire:" << endl;
    for (int indice = 0; indice < quantiteDAccesoires; indice++)
    {
        cout << "Nom: " << endl;
        //cin >> accesoires[indice]; NE MARCHE PAS avec d'espaces vides
        cin.ignore();
        getline(cin, accesoires[indice]);
        cout << "Prix HT: " << endl;
        cin >> prixHT[indice];
        //Appel de la fonction pour calculer le prix TTC, avec le prixHT en paramètre
        prixTTC[indice] = calculePrixTTC(prixHT[indice]);
    }

    //Boucle qui appelle la fonction pour afficher tous les éléments des tableaux.
    for (int indice = 0; indice < quantiteDAccesoires; indice++)
    {
        afficherInfoTableaux(accesoires[indice], prixHT[indice], prixTTC[indice]);
    }

    //Suppression de pointeurs
    delete[] accesoires;
    delete[] prixHT;
    delete[] prixTTC;
    return 0;
}