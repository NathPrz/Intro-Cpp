#include <iostream>
#include <string>
using namespace std;


int main(){ 

  //Validation d'accès au programme

  string motDePasse = "HelloPw";
  string codeDAcces;

  cout<< "Bonjour, Entrez votre code d'acces s'il vous plait: ";
  cin>> codeDAcces;

    if (codeDAcces == motDePasse) {
      //Code d'Accès correct
      cout<< "Bienvenu" << endl;
      
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
      cout<<"La voiture est elle electrique? (Entrez 0 = non, 1 = oui)";
      cin>> voitureElectrique;
      }

      //Prix TTC. Taux TVA different si la voiture est éléctrique.
      double prixTTC;
      if (voitureElectrique == 1) {
        double tauxTVA = 0.05;
        prixTTC = prixVoitureHT*(1+tauxTVA);
        cout << "Le prix d'une voiture " + marqueVoiture + " model " + modelVoiture + " TTC est " ;
        cout << prixTTC << endl;  
      }else{
        double tauxTVA = 0.2;
        prixTTC = prixVoitureHT*(1+tauxTVA);
        cout << "Le prix d'une voiture " + marqueVoiture + " model " + modelVoiture + " TTC est " ;
        cout << prixTTC << endl; 
      } 

      //Remise de 10% si l'achat TTC est superieur à 20 000€
      double remise = 0.1;
      if (prixTTC > 20000) {
      double prixAvecRemise = prixTTC*(1-remise);
        cout << "Le prix de la voiture avec remise est ";
        cout << prixAvecRemise<<endl; 
      }   
    }else{
      //Code d'Accès incorrect
      cout<< "Desole, le Code d'Acces n'est pas valide. A bientot.";
    }
    
}