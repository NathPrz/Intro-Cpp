//Programme pour gérer un panier
#include <iostream>
#include <string>
using namespace std;

//Fonction qui calcule et rajoute la TVA pour chaque accesoire.
double calculePrixTTC(double prixHT)
{
    double tva = 0.2;
    return prixHT * (1 + tva);
}

//Fonction qui affiche les éléments des differents tableaux.
void afficherInfoTableaux(string nom, double prix, double prixTTC)
{
    cout << "L'accesoire " << nom << " cout: " << prix << " EUR HT et ";
    cout << prixTTC << " EUR TTC.\n";
}
//Fontion qui calcule et affiche le prix moyen du panier.
void moyenne(int nAccesoires, double prixHTPanier)
{
    cout << "La moyenne des prix est: " << prixHTPanier / nAccesoires << " EUR." << endl;
}

//Fontion qui calcule et affiche le prix min et le prix max.
void prixMinEtMax(int nAccesoires, double* prix)
{
    double prixMin;
    double prixMax;
    for (int i = 0; i < nAccesoires; i++)
    {
        if (i == 0)
        {
            prixMin = prix[i];
            prixMax = prix[i];
        }
        if (prix[i] > prixMax)
        {
            prixMax = prix[i];
        }
        if (prix[i] < prixMin)
        {
            prixMin = prix[i];
        }
    }
    cout << "Le prixHT minimal est: " << prixMin << " EUR et le maximal: " << prixMax << " EUR."<< endl;
}

int main()
{
    //Definition de la taille des tableaux à l'aide de l'utilisateur
    int quantiteDAccesoires;
    cout << "Bonjour! Combien d'accesoires voulez vous ajouter au panier?";
    cin >> quantiteDAccesoires;

    //Declaration des tableaux
    string accesoires[quantiteDAccesoires];
    double prixHT[quantiteDAccesoires], prixTTC[quantiteDAccesoires];

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

    double prixHTPanier = 0;

    for (int i = 0; i < quantiteDAccesoires; i++)
    {
        //Additionne du prixHT des accesoires
        prixHTPanier += prixHT[i];
        //Appel de fonction pour afficher tous les éléments des tableaux.
        afficherInfoTableaux(accesoires[i], prixHT[i], prixTTC[i]);
    }

    //Appel des fonctions pour afficher la moyenne et les prix min et max
    moyenne(quantiteDAccesoires, prixHTPanier);
    prixMinEtMax(quantiteDAccesoires, prixHT);

    return 0;
}