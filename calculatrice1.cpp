#include <iostream>
using namespace std;

int main() {

    double a, b;
    int choix;

    while (true) {

        cout << "\n===== MENU =====\n";
        cout << "1. Addition\n";
        cout << "2. Soustraction\n";
        cout << "3. Multiplication\n";
        cout << "4. Division\n";
        cout << "0. Quitter\n";
        cout << "Ton choix : ";
        cin >> choix;

        if (choix == 0) {
            cout << "Au revoir !" << endl;
            break;
        }

        cout << "Premier nombre : ";
        cin >> a;

        cout << "Deuxieme nombre : ";
        cin >> b;

        switch (choix) {

            case 1:
                cout << "Resultat = " << a + b << endl;
                break;

            case 2:
                cout << "Resultat = " << a - b << endl;
                break;

            case 3:
                cout << "Resultat = " << a * b << endl;
                break;

            case 4:
                if (b != 0)
                    cout << "Resultat = " << a / b << endl;
                else
                    cout << "Erreur : division par zero !" << endl;
                break;

            default:
                cout << "Choix invalide !" << endl;
        }
    }

    return 0;
}