#include <iostream>
#include <string>
using namespace std;

int main() {

  int nombreProduits;

  cout << "Pour combient de produits souhaitez vous calculer le prix TTC?";
  cin >> nombreProduits;
  
  //Calculer le prix TTC pour la quantité de produits souhaites

  for (int i = 0; i < nombreProduits; i++) {
    int prixProduitHT;
    cout << "Quel est le prix HT du produit?";
    cin >> prixProduitHT;

    //Prix TTC
    double tauxTVA = 0.2;
    double prixTTC = prixProduitHT * (1 + tauxTVA);
    cout << "Le prix du produit TTC est ";
    cout << prixTTC << endl;

    //Remise de 10% si l'achat TTC est superieur à 20 000€
    double remise = 0.1;
    if (prixTTC > 20000) {
      double prixAvecRemise = prixTTC * (1 - remise);
      cout << "Le prix du produit avec remise est ";
      cout << prixAvecRemise << endl;
    }
  }
  cout << "Au revoir";

  return 0;
}
