#include <iostream>
#include <string>
using namespace std;

//Programme pour gérer un panier

int main(){

    //Inisialisation des pointeurs
    string *accesoires = NULL;
    double *prixHT = NULL;

    //Definition de la taille des tableaux à l'aide de l'utilisateur
    int quantiteDAccesoires;
    cout << "Bonjour! Combien d'accesoires voulez vous ajouter au panier?";
    cin >> quantiteDAccesoires;

    accesoires = new string[quantiteDAccesoires];
    prixHT = new double[quantiteDAccesoires];

    //Boucle qui demande à l'utilisateur les accesoires et leur prix pour inisialiser les tableaux
    cout << "Veuillez indiquer l'information qui suive pour chanqun des accesoires:" << endl;
    for (int indice = 0; indice < quantiteDAccesoires; indice++){
        cout << "Nom: ";
        //cin >> accesoires[indice]; NE MARCHE PAS avec d'espaces vides
        getline(cin, accesoires[indice]);
        getline(cin, accesoires[indice]);
        cout << "Prix HT: ";
        cin >> prixHT[indice];
    }

    //Boucle qui affiche le nom et le prixHT des accesoires
    cout << "Liste d'accesoires: " << endl;
    for (int indice = 0; indice < quantiteDAccesoires; indice++){
        cout << accesoires[indice] << endl;
        cout << prixHT[indice] << endl;
    }

    //Boucle qui additionne le prix des accesoires
    double prixHTDuPanier = 0;
    for (int indicePrixHT = 0; indicePrixHT < quantiteDAccesoires; indicePrixHT++){
        prixHTDuPanier += prixHT[indicePrixHT];
    }
    
    cout << "Prix HT du panier: ";
    cout << prixHTDuPanier;

    //Suppression de pointeurs
    delete[] accesoires;
    delete[] prixHT;
    return 0;
}
