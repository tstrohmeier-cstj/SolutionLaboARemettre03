//But:   �crivez un programme qui lit 10 nombres et qui d�termine et affiche la plus grande valeur. Le programme doit utiliser 3 variables :
//         Compteur: Variable comptant jusqu'� 10
//         Nombre : Le nombre entr� par l'utilisateur
//         Max : La plus grande valeur de tous les nombres
//Auteur: Tom Strohmeier
//Date: 2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   //D�claration et initialisation des constantes programme:
      const int NB_NOMBRE = 10;

   //D�claration des variables programme:
      double max;

   //Boucle qui r�p�te 10 fois les instructions � l'int�rieur.
      for (int compteur = 1; compteur <= NB_NOMBRE; compteur++)
      {
         //D�claration de la variable nombre qui existe seulement dans la boucle.
         double nombre;

         //Demande � l'utilisateur d'entrer un nombre.
         cout << "Veuillez entrer un nombre: " << endl;
         
         //Enregistre le nombre de l'utilisateur dans la variable nombre.
         cin >> nombre;

         //Condition pour enregistrer le premier nombre utilisateur dans la variable max afin de l'initialiser. Ceci se produit simplement � la 
         //premi�re execution de la boucle bas� sur la variable compteur.
         if (compteur == 1)
         {
            max = nombre;
         }

         //Si la valeur du nombre entier est plus grande que celle enregistr� dans max, celle-ci la remplace.
         else if (nombre > max)
         {
            max = nombre;
         }
      }

      //Affiche le r�sultat � l'�cran utilisateur.
      cout << "Le plus grand nombre que vous avez entrer est: " << max << endl;

   system("pause");

   return 0;


   /*
   Plan de test:

   nombre:		                                       r�sultat attendu:					affichage �cran:
   11,22,33,44,55,66,99,77,88,01                      99                            Le plus grand nombre que vous avez entrer est: 99
   a                                                  erreur                        erreur
   -23,-11,0,23,78,65,99,44,33,22                     99                            Le plus grand nombre que vous avez entrer est: 99
   0,0,0,0,0,0,0,0,0,0                                0                             Le plus grand nombre que vous avez entrer est: 0
   1.1, 1.2, 1.3, 1.4, 1.5, 1.6, 1.9, 1.7, 1.8, 1.1   erreur                        Le plus grand nombre que vous avez entrer est: 1.9
   1,1                                          
   */
}