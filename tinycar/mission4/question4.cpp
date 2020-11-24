#include <iostream>
#include <string>
using namespace std;

//Programme pour gérer un panier

int main()
{

    //Inisialisation des pointeurs
    string* accesoires = nullptr;
    double* prixHT = nullptr;

    //Definition de la taille des tableaux à l'aide de l'utilisateur
    int quantiteDAccesoires;
    cout << "Bonjour! Combien d'accesoires voulez vous ajouter au panier?";
    cin >> quantiteDAccesoires;

    accesoires = new string[quantiteDAccesoires];
    prixHT = new double[quantiteDAccesoires];

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
    }

    //Boucle qui affiche le nom et le prixHT des accesoires
    cout << "Liste d'accesoires:\n";
    for (int indice = 0; indice < quantiteDAccesoires; indice++)
    {
        cout << accesoires[indice] << ": ";
        cout << prixHT[indice] << endl;
    }

    //Boucle qui additionne le prix des accesoires
    double prixHTDuPanier = 0;
    for (int indicePrixHT = 0; indicePrixHT < quantiteDAccesoires; indicePrixHT++)
    {
        prixHTDuPanier += prixHT[indicePrixHT];         
    }
    
    cout << "Prix HT du panier: " << prixHTDuPanier << endl;

    // Bloucle qui trouve les prix minimum et maximum

    double prixMinimum, prixMaximum;
    string accesoirePlusCher, accesoireMoinsCher;

    for (int indice = 0; indice < quantiteDAccesoires; indice++)
    {
        if (indice == 0)
        {
            prixMinimum = prixHT[indice];
            prixMaximum = prixHT[indice];
        }
        if (prixHT[indice] > prixMaximum)
        {
            prixMaximum = prixHT[indice];
            accesoirePlusCher = accesoires[indice];
        }
        if (prixHT[indice] < prixMinimum)
        {
            prixMinimum = prixHT[indice];
            accesoireMoinsCher = accesoires[indice];
        }
    }

    cout << "Accesoire moins cher:\n";
    cout << accesoireMoinsCher << ": " << prixMinimum << endl;
    cout << "Accesoire plus cher:\n";
    cout << accesoirePlusCher << ": " << prixMaximum << endl;

    //Calcul du prix moyen
    double prixMoyen = prixHTDuPanier / quantiteDAccesoires;
    cout << "Le prix moyen d'achat est " << prixMoyen;

    //Suppression de pointeurs
    delete[] accesoires;
    delete[] prixHT;
    return 0;
}
