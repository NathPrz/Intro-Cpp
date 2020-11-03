#include <iostream>
#include <string>
using namespace std;

//Programme pour gérer un panier

int main(){

  //Tableau pour les noms des accesoires
  string accesoires[5] = {"House Clavier", "Pedale", "Métronome", "Pupitre", "Accordeur"};
  //Tableau pour les prix hors taxes des accesoires
  double prixHT[5] = {20.75, 63.5, 31.8, 25.5, 75.4};

  //Boucle qui affiche le nom et le prixHT des accesoires
  for (int indice = 0; indice < 5; indice++){
    cout << accesoires[indice] << endl;
    cout << prixHT[indice] << endl;
  }
  getchar();
  return 0;
}
