#include <iostream>
#include <string>
using namespace std;


int main(){ 
  
  string marqueVoiture;{
  cout<<"quelle est la marque de la voiture?";
  cin>> marqueVoiture;
  }
  
  string modelVoiture;{
  cout<<"quel est le model de la voiture?";
  cin>> modelVoiture;
  }
  
  int prixVoitureHT;{
  cout<<"quel est le prix HT de votre voiture?";
  cin>> prixVoitureHT;
  double tauxTVA = 0.2;
  double prixTTC = prixVoitureHT*(1+tauxTVA);
    cout << "Le prix d'une voiture " + marqueVoiture + " model " + modelVoiture + " TTC est " ;
    cout << prixTTC ;

  double remise = 0.1;
    if (prixTTC > 20000) {
     double prixAvecRemise = prixTTC*(1-remise);
      cout << " Le prix de la voiture avec remise est ";
      cout << prixAvecRemise;
    
  }
  }
}