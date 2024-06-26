#include <iostream>
#include <string>
#include "classex.h"

using namespace std;

void main()
{
	string tab[1] = { " test" }; string tab1[5] = { " 06", " 37", " 45", " 22", " 13" }; string tab2[2] = { " G", " C" };
	CMenu a(tab,1);  // test l'exception 'NPasNombre'
	CMenu b(tab1, 6);// test l'exception 'HorsIntervall'
	CMenu c(tab2, 2);// test l'exception 'PasNombre'
	
	a.exo3(tab, 1);
	/*b.exo3(tab1, 5);*/
	/*c.exo3(tab2, 2);*/
	
	system("pause");
}