#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "veuillez entrer un nombre entier" << endl;
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "Le nombre est pair" << endl;
    }
    else {
        cout << "Ce nombre est impaire" << endl;
    }

    return 0;
}