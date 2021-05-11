#include <iostream>

using namespace std;

int main(){

    int x, y, aux;

    cout << "Digite o valor de x";
    cin >> x;

    cout << "Digite o valor de y";
    cin >> y;

    cout << "O valor de x eh: " << x << endl;
    cout << "O valor de y eh: " << y << endl;
    
    aux = x;
    x = y;
    y = aux;

    cout << "O valor de x eh: " << x << endl;
    cout << "O valor de y eh: " << y << endl;



}
