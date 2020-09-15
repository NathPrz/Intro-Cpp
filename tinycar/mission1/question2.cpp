#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0
//Objectif : Écrire le programme qui affiche le prix total TTC de la voiture en fonction du prix HT, du taux de tva(on prendra des valeurs au hasard).


int main()
{
  int prixVoitureHT =9800;
  int tauxTVA = 9800/100*20;
  int prixTTC = prixVoitureHT + tauxTVA;
    cout << "Le prix totale de la voiture TTC est " ;
    cout << prixTTC ;
}