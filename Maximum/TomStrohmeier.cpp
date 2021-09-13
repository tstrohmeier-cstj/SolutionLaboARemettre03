//But:   Écrivez un programme qui lit 10 nombres et qui détermine et affiche la plus grande valeur. Le programme doit utiliser 3 variables :
//         Compteur: Variable comptant jusqu'à 10
//         Nombre : Le nombre entré par l'utilisateur
//         Max : La plus grande valeur de tous les nombres
//Auteur: Tom Strohmeier
//Date: 2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   //Déclaration et initialisation des constantes programme:
      const int NB_NOMBRE = 10;

   //Déclaration des variables programme:
      double max;
      double nombre;

      for (int compteur = 1; compteur <= NB_NOMBRE; compteur++)
      {
         cout << "Veuillez entrer un nombre: " << endl;
         cin >> nombre;


      }






   system("pause");
   return 0;
   /*
   Plan de test:

   (nom variable):		résultat attendu:					affichage écran:

   */
}