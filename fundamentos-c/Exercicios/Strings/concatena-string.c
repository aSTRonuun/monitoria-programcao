#include <stdio.h>

int main (){

    char string1[101];
    int tamanhoString1 = 0;

    char string2[101];
    int tamanhoString2 = 0;

    scanf(" %[^\n]", string1);

    scanf(" %[^\n]", string2);

    for(int i=0;string1[i];i++){
        tamanhoString1++;
    }

    for(int i=0;string2[i];i++){
        tamanhoString2++;
    }

    

    printf("%d %d", tamanhoString1, tamanhoString2);
}