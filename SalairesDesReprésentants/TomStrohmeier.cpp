//But:            Une grosse soci�t� de produits chimiques r�mun�re ses repr�sentants commerciaux � la commission. Les 
//                repr�sentants re�oivent 250 $ par semaine plus 7.5 % de leurs ventes brutes par semaine.Par exemple, un
//                repr�sentant qui vend pour 5000 $ de produits chimiques en une semaine, per�oit un salaire de 250 $ plus 7.5 % de
//                5000$, soit un total de 625 $.
//                D�veloppez un programme qui entre les ventes brutes hebdomadaires de chaque repr�sentant et qui calcule et
//                affiche son salaire.Entrez - 1 � la valeur des ventes pour quitter le programme.
//Auteur:         Tom Strohmeier
//Date:           2021-09-13

#include <iostream>
using namespace std;

int main()
{
   setlocale(LC_ALL, "");

   //D�claration et initialisation des constantes programme:
   const float POURCENT_COMM     = 0.075;       //Pourcentage de commission vendeur.
   const int   SALAIRE_SEM       = 250;         //Salaire hebdomadaire vendeur.

   //D�claration des variables programme:
   double total;
   double montant = 0;

   //Utilisation de la loop while afin de r�p�ter le programme jusqu'� ce que la condition soit atteinte.
   while (montant != -1)
   {
      //Affichage message pour demander la valeur des ventes � l'utilisateur. 
      //Affichage des instructions pour mettre fin au programme.
      cout << "Veuillez entrer le total des ventes brutes hebdomadaires du repr�sentant: \n" << "Entrer -1 pour quitter" << endl;

      //La valeur entr� par l'utilisateur est enregistr�e dans la variable montant.
      cin >> montant;

      //Condition bas� sur la variable montant pour assurer l'entr�e de variable accept�es.
      if (montant >=-1)
      {
         //Condition pour mettre fin au programme.
         if (montant == -1)
         {
            //Affichage pour signaler la fin du programme.
            cout << "Fin du programme." << endl;
         }
         //Condition pour calculer le salaire du repr�santant.
         else if (montant != -1)
         {  
            //Formule de calcule du salaire hebdomadaire.
            total = SALAIRE_SEM + montant * POURCENT_COMM;

            //Affichage message � l'utilisateur donnant salaire.
            cout << "Le salaire hebdomadaire du repr�sentant avec commission est de: " << total << " $." << endl;
         }
      }
      //Si la condition if n'est pas respect�, affiche message d'erreur et la loop recommence.
      else
      {
         cout << "Le montant des ventes ne peux pas �tre n�gatif" << endl;
      }
   }

   system("pause");
   return 0;


   /*
   Plan de test:

   Montant:		      r�sultat attendu:					affichage �cran:

   a                 programme plante              et merde...
   -1                fin programme                 fin programme
   5000              625                           625
   -2                erreur                        erreur
   5000,50           625.038                       625.038





   */
}