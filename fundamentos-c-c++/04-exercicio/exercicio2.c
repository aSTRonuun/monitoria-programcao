#include <stdio.h>

int main(){

    int x, y, aux;

    printf("Digite o valor de x: \n");
    scanf("%d", &x);
    printf("Digite o valor de y: \n");
    scanf("%d", &y);

    printf("O valor de x eh %d\n", x);
    printf("O valor de y eh %d\n", y);

    aux = x;
    x = y;
    y = aux;

    printf("O valor de x agora eh %d\n", x);
    printf("O valor de y agora eh %d\n", y);


    return 0;
}