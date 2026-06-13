#include <iostream>
using namespace std;
int main (){

double a, b;
char operateur;

cout << "premier nombre : ";
cin >> a;

cout << "choississez un operateur : ";
cin >> operateur;

cout << "deuxieme nombre : ";
cin >> b;

switch (operateur){
    case '+':
        cout << "resultat = " << a + b << endl;  
    break;

    case '-':
        cout << "resultat = " << a - b << endl;
    break;
    
    case '*':
        cout << "resultat = " << a * b << endl;
    break;

    case '/':
    if (b != 0)
        cout << "resultat = " << a / b << endl;
    else 
        cout << "erreur : division par zero !" << endl;
    break;

    default:
    cout << "opperateur invalide !" << endl;
}
return 0;



}
