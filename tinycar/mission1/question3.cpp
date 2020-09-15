#include <iostream>
using namespace std;


int main(){  
  int prixVoitureHT;
  cout<<"quel est le prix HT de la voiture?";
  cin>> prixVoitureHT;
  double tauxTVA = 0.2;
  double prixTTC = prixVoitureHT*(1+tauxTVA);
    cout << "Le prix totale de la voiture TTC est " ;
    cout << prixTTC ;
    
}