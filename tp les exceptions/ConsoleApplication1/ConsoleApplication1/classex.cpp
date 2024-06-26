#include <iostream>
#include <string>
#include "classex.h"

using namespace std;



CMenu::CMenu(string tab[], int taille) :m_tab(new string[taille]), m_taille(taille){}

int CMenu::saisirChoix(int n)
{

	n < 10;
	cout << "saisir un entier entre 1 et " << n << endl;
	int valeur;
	cin >> valeur;
	if (n <= 1)
	{
		throw new NPasBon;
	}
	else if (cin.fail())
	{
		throw new PasNombre;
	}
	else if (valeur < 1 || valeur > n)
	{
		throw new HorsIntervalle;
	}
	else{
		return valeur;
	}
	
}

void CMenu::Affichage(string tab[], int length)
{ 
	for (int i = 0; i < length; i++)
	{
		cout << tab[i] <<endl;
	} 
}

int CMenu::exo3(string tab[], int length/*<-- le choix en entier*/)
{
	int valeur;
	try 
	{
		Affichage(tab, length);
		valeur = saisirChoix(length);
	}
	catch (NPasBon *e)
	{
		cout << e->what() << " Pour NPasBon"<<endl;
		exit(-1);
	}
	catch (PasNombre *e)
	{
		cout << e->what() << " Pour PasNombre" << endl;
		exit(-1);
	}
	catch (HorsIntervalle *e)
	{
		cout << e->what() << " Pour HorsIntervalle" << endl;
		exit(-1);
	}
	return 0;
}

