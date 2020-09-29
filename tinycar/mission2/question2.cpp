#include <iostream>
#include <string>
using namespace std;


int main(){ 
  
  string marqueVoiture;{
  cout<<"Quelle est la marque de la voiture?";
  cin>> marqueVoiture;
  }
  
  string modelVoiture;{
  cout<<"Quel est le model de la voiture?";
  cin>> modelVoiture;
  }
  
  int prixVoitureHT;{
  cout<<"Quel est le prix HT de votre voiture?";
  cin>> prixVoitureHT;
  }
  
  int voitureElectrique;{
  cout<<"La voiture est elle electrique? (Marquez 0 = non, 1 = oui)";
  cin>> voitureElectrique;
  }
  
  if (voitureElectrique == 1) {
    double tauxTVA = 0.05;
    double prixTTC = prixVoitureHT*(1+tauxTVA);
    cout << "Le prix d'une voiture " + marqueVoiture + " model " + modelVoiture + " TTC est " ;
    cout << prixTTC << endl; 
    
   double remise = 0.1;
    if (prixTTC > 20000) {
     double prixAvecRemise = prixTTC*(1-remise);
      cout << "Le prix de la voiture avec remise est ";
      cout << prixAvecRemise;
    }
  }
    if (voitureElectrique == 0) {
    double tauxTVA = 0.2;
    double prixTTC = prixVoitureHT*(1+tauxTVA);
    cout << "Le prix d'une voiture " + marqueVoiture + " model " + modelVoiture + " TTC est " ;
    cout << prixTTC << endl; 
    
   double remise = 0.1;
    if (prixTTC > 20000) {
     double prixAvecRemise = prixTTC*(1-remise);
      cout << "Le prix de la voiture avec remise est ";
      cout << prixAvecRemise;
    }
    }
}