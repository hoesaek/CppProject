#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int nbLigne; /* Nombre de ligne du sapin */
    int nbesp;   /* Nombre d'espaces avant '*' */
    int count;   /* Nombre de '*' sur la dernière ligne */
    int i, j;    /* Compteurs */

    // Initialisation du générateur de nombres aléatoires
    srand(time(0));

    cout << "Veuillez indiquer le nombre de lignes pour le sapin : ";
    cin >> nbLigne;

    // Construction du sapin
    for (i = 0; i < nbLigne; i++)
    {
        nbesp = nbLigne - i - 1;

        // Affichage des espaces
        for (j = 0; j < nbesp + 1; j++)
            putchar(' ');

        // Affichage des caractères du sapin avec décorations aléatoires
        for (j = 0; j < (2 * (i + 1)) - 1; j++)
        {
            if (i > 0)
            {
                // Ajout aléatoire de décorations
                int randomNum = rand() % 10;
                if (randomNum < 2)
                    putchar('o'); // Boules de Noël
                else if (randomNum == 3)
                    putchar('@'); // Étoile spéciale
                else
                    putchar('^'); // Feuillage
            }
            else
            {
                putchar('*'); // Sommet du sapin
            }
        }
        putchar('\n');
    }

    // Calcul de la largeur du tronc
    count = (nbLigne * 2) - 1;

    // Affichage du tronc
    for (i = 0; i < count; ++i)
    {
        int a = count / 3;
        int b = (count * 2) / 3;

        if ((i < a + 1) || (i >= b + 1))
            putchar(' ');
        else
            putchar('|');
    }
    
    putchar('\n');
    cout << endl;

    return EXIT_SUCCESS;
}
