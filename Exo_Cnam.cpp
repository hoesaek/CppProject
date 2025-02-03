#include <iostream>

using namespace std;

int main() {
    int num;
    cout << "Veuillez entrer un nombre entier" << endl;
    cin >> num;
    
    cout << (num % 2 == 0) ? "Le nombre est pair" : "Ce nombre est impaire" << endl;

    return 0;
}
