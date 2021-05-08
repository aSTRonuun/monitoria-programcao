/*
-------------- C -------------
#include <stdio.h>

int main (void){

    char firstName[30];

    printf("Digite seu primeiro nome: ");
    scanf("%s", firstName);

    printf("O seu primeiro nome eh %s", firstName);

    return 0;
}
*/


//-------------- C++ -------------
#include <iostream>

using namespace std;

int main(){

    string secondName;

    cout << "Digite o seu segundo nome: ";
    cin >> secondName;
    cout << "O seu segundo nome eh " << secondName << endl;

    return 0;
}
