#include<stdio.h>

int main(int argc, char const *argv[])
{

    int soma = 0;
    scanf("%d", &soma);
    char letra = (soma - 1) % 26 + 'a';
    if(soma != 0){
        printf("%c\n", letra);
        printf("%d", soma);
    }
    else
        printf("joguem de novo\n");
    return 0;
}