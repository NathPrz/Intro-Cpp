//Programme pour gérer un panier
#include <iostream>
#include <string>
using namespace std;

//Fonction qui affiche un texte descriptif pour chaque accesoire.//
void texteDescriptif(string nom, double prix, double prixTTC)
{
    cout << "L'accesoire " << nom << " cout " << prix << " EUR hors taxes et ";
    cout << prixTTC << " EUR TTC.\n";
}
//Fonction qui calcule le TVA pour chaque accesoire.//
double calculePrixTTC(double prixHT)
{
    double tva = 0.2;
    return prixHT * (1 + tva);
}

//Programme pour gérer un panier

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
    prixHT = new (nothrow) double[quantiteDAccesoires];
    prixTTC = new (nothrow) double[quantiteDAccesoires];

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
        prixTTC[indice]=calculePrixTTC(prixHT[indice]);
    }

    for (int indice = 0; indice < quantiteDAccesoires; indice++)
    {
        //Boucle qui appelle la fonction pour afficher le descriptif du panier. En paramètres les deux tableaux.
        texteDescriptif(accesoires[indice], prixHT[indice], prixTTC[indice]);
    }

    //Suppression de pointeurs
    delete[] accesoires;
    delete[] prixHT;
    delete[] prixTTC;
    return 0;
}