//But:            Une grosse société de produits chimiques rémunère ses représentants commerciaux à la commission. Les 
//                représentants reçoivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
//                représentant qui vend pour 5000 $ de produits chimiques en une semaine, perçoit un salaire de 250 $ plus 7.5 % de
//                5000$, soit un total de 625 $.
//                Développez un programme qui entre les ventes brutes hebdomadaires de chaque représentant et qui calcule et
//                affiche son salaire.Entrez - 1 à la valeur des ventes pour quitter le programme.
//Auteur:         Tom Strohmeier
//Date:           2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   //Déclaration et initialisation des constantes programme:
   const float POURCENT_COMM     = 0.075;       //Pourcentage de commission vendeur.
   const int   SALAIRE_SEM       = 250;         //Salaire hebdomadaire vendeur.

   //Déclaration des variables programme:
   double total;
   double montant = 0;

   //Utilisation de la loop while afin de répéter le programme jusqu'à ce que la condition soit atteinte.
   while (montant != -1)
   {
      //Affichage message pour demander la valeur des ventes à l'utilisateur. 
      //Affichage des instructions pour mettre fin au programme.
      cout << "Veuillez entrer le total des ventes brutes hebdomadaires du représentant: \n" << "Entrer -1 pour quitter" << endl;

      //La valeur entré par l'utilisateur est enregistrée dans la variable montant.
      cin >> montant;

      //Condition basé sur la variable montant pour assurer l'entrée de variable acceptées.
      if (montant >=-1)
      {
         //Condition pour mettre fin au programme.
         if (montant == -1)
         {
            //Affichage pour signaler la fin du programme.
            cout << "Fin du programme." << endl;
         }
         //Condition pour calculer le salaire du représantant.
         else if (montant != -1)
         {  
            //Formule de calcule du salaire hebdomadaire.
            total = SALAIRE_SEM + montant * POURCENT_COMM;

            //Affichage message à l'utilisateur donnant salaire.
            cout << "Le salaire hebdomadaire du représentant avec commission est de: " << total << " $." << endl;
         }
      }
      //Si la condition if n'est pas respecté, affiche message d'erreur et la loop recommence.
      else
      {
         cout << "Le montant des ventes ne peux pas être négatif" << endl;
      }
   }

   system("pause");
   return 0;


   /*
   Plan de test:

   Montant:		      résultat attendu:					affichage écran:

   a                 programme plante              et merde...
   -1                fin programme                 fin programme
   5000              625                           625
   -2                erreur                        erreur
   5000,50           625.038                       625.038





   */
}