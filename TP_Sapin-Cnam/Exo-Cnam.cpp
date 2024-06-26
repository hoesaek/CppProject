// Exo-Cnam.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
#include <iostream>
#include <string>
#include <random>
#include <time.h>
 
using namespace std;
int main()
{
	int nbLigne; /*Nombre de ligne du sapin */
	int nbesp;	/*Nombre d'espace avant '*' */
	int count; /*compte le nbr de '*' de la derniere ligne */
	int i;	  /*Compteur de ligne*/
	int j;   /*Determine emplacement avec nbesp du char '*' */

	//rand() % ... pour delimité rand exemple pour  i =0 i<5 i++ cout rand%5 output 2 4 1 3 5
	cout << "Veuillez indiquer le nombre de ligne pour le sapin :" << endl; cin >> nbLigne;
	for (i = 0; i < nbLigne; i++)
	{
		nbesp = nbLigne - i - 1;
		for (j = 0; j < nbesp + 1; j++) putchar(' '); /*nb espaces avant '*' */
		for (j = 0; j < (2 * (i + 1)) - 1; j++)
		{
			if (i > 0) putchar('^'); else putchar('*');
		}putchar('\n');
		
	}
	count = (nbLigne * 2) - 1;
	for (i = 0; i < count; ++i)
	{
		int a = count * 1 / 3; int b = count * 2 / 3;
		if ((i < a + 1) || (i >= b + 1)) putchar(' '); else putchar('|');
	}
	putchar('\n'); cout << endl;
	return EXIT_SUCCESS;
}
/*
	À finir mettre aleatoirement des decorations sur sapin evite que ce soit moche et pense à utiliser la methode rand() vu en commentaire plutot.
*/