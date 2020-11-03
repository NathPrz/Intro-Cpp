#include <iostream>
#include <string>
using namespace std;

//Programme pour gérer un panier

int main(){
    
    //Tableau pour les noms des accesoires
    string accesoires[5] = {"House Clavier ", "Pedale ", "Métronome ", "Pupitre ", "Accordeur "};
    //Tableau pour les prix hors taxes des accesoires
    double prixHT[5];

    //Boucle qui demande à l'utilisateur le prixHT des accesoires pour inisialiser le deuxième tableau
    cout << "Veulliez indiquer le prix hors taxes de chaque accesoire, s'il vous plait:" << endl;

    for (int indice = 0; indice < 5; indice++){
        cout << accesoires[indice] << endl;
        cin >> prixHT[indice];
    }

    //Boucle qui affiche le nom et le prixHT des accesoires
    cout << "Voici la liste d'accesoires:" << endl;
    for (int indice = 0; indice < 5; indice++){
        cout << accesoires[indice];
        cout << prixHT[indice] << endl;
    }
    return 0;
}
