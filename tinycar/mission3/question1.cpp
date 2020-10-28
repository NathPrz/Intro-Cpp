#include <iostream>
#include <string>
using namespace std;

int main() {

  int calculerPrix;

  do {
    cout << "Souhaitez vous calculer le prix TTC d'un nouveau produit? Tapez 1 pour commencer 0 pour finir :";
    cin >> calculerPrix;

    if (calculerPrix == 1) {
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
        cout << " Le prix du produit avec remise est ";
        cout << prixAvecRemise << endl;
      }
    } else {
      cout << "Au revoir";
    }
  } while (calculerPrix == 1);
  return 0;
}
