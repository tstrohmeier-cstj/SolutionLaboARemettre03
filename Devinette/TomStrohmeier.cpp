//But:      Compl�tez ce programme pour qu�il donne la possibilit� � l�utilisateur de deviner le nombre contenu dans random. 
//          L�utilisateur a un maximum de 5 chances.Le programme v�rifie que l�utilisateur a bien entr� un nombre entre 0 et
//          100 et lui indique s�il gagne ou dans le cas contraire lui indique le nombre d�essais restant et lui redemande un nombre.
//Auteur:   Tom Strohmeier
//Date:     2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");
   //D�claration et initialisation des constantes programme:





   //D�claration des variables programme:
   int random; // permet de m�moriser le nombre choisi al�atoirement par l�ordinateur

   srand(time(0)); // pour activer l�al�atoire dans le programme
   random = rand() % 101; // l�ordinateur calcule un nombre al�atoire entre 0 et 100 et le stocke dans random

   //Boucle donnant 5 chance de trouver la valeur de random.
   for (int compteur = 1; compteur <= 5; compteur++)
   {  
      //D�claration de la variable nombre.
      int nombre;

      //Demande un nombre � l'utilisateur.
      cout << "Veuillez essayer de deviner le nombre al�atoire g�n�r� par l'ordinateur." << endl;

      //Enregistre la valeur donner par l'utilisateur dans la variable nombre.
      cin >> nombre;

      //Condition pour participer, demande un nombre en 0 et 100.
      if (nombre >= 0 && nombre <= 100)
      {
         //Condition pour gagner, si le nombre est �gale au nombre al�atoire.
         if (nombre == random)
         {
            //Si gagnant, un message affiche et le programme stop.
            cout << "F�licitation ! Vous avez devin� le nombre: " << random << " !" << endl;
            compteur = 5;
         }
         //Si le nombre de l'utilisateur est mauvais, un message lui affiche le nombre de chance qui lui reste.
         else
         {
            cout << "Mauvaise r�ponce, il vous reste " << 5 - compteur << " chances !" << endl;
         }
      }
      //Si l'utilisateur entre une valeur nom comprise en 0 et 100, le programme lui dit et se ferme.
      else
      {
         cout << "Vous devez entrer des nombre entre 0 et 100." << endl;
         compteur = 5;

      }
   }

   system("pause");

   return 0;

   /*
   Plan de test:

   Nombre:		                        r�sultat attendu:					affichage �cran:
   a                                   erreur, stop                  erreur, stop
   -1                                  stop                          message et stop
   plein de chiffre entre 0 et 100     (pas chanceux)                (zut flut)
   gagnant                             gagnant, stop                 (va t'acheter un 649 tom.... ahah)
   */
}