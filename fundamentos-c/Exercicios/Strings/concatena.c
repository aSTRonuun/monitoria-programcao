#include <stdio.h>
int main(){

    char frase1[101];
    scanf(" %[^\n]", frase1);

    char frase2[101];
    scanf(" %[^\n]", frase2);


    int tamanhofrase1 = 0;
    for(int i = 0 ;frase1[i] ; i++){
        tamanhofrase1++;
    }

    int tamanhofrase2 = 0;
    for(int j = 0 ;frase2[j] ; j++){
        tamanhofrase2++;
    }

    int tamanhonovafrase = tamanhofrase1 + tamanhofrase2;

    char novafrase[tamanhonovafrase];

    for(int i = 0 ;i < tamanhofrase1 ; i++){
        novafrase[i] = frase1[i];
    }

    for(int j = 0 ; j < tamanhofrase2 ; j++){
        novafrase[tamanhofrase1+j] = frase2[j];
    }

    printf("%d\n", tamanhonovafrase);
    for(int i = 0 ; i < tamanhonovafrase ; i++){

        printf("%c", novafrase[i]);
    }


}