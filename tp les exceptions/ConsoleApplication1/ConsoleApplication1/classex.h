#include <iostream>
#include <exception>

using namespace std;

/*void Menu(string tab[], int length);
int exo3(string tab[], int length);
int saisirChoix(int n);*/

class CMenu
{
public :
	CMenu(string tab[],int taille);
	int saisirChoix(int n);
	void Affichage(string tab[], int length);
	int exo3(string tab[], int length);
private :
	int m_taille;
	string *m_tab;
};

class NPasBon : public exception{ public:const char* what() const { return "Erreur ! "; } };
class PasNombre : public exception{ public:const char* what() const { return "Erreur ! "; } };
class HorsIntervalle : public exception{ public:const char* what() const { return "Erreur ! "; } };