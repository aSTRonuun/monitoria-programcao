#include <stdio.h>

int main(){

    int hora = 0, minuto = 0, distancia = 0;
    char sentido = ' ';



    scanf("%d %d %c %d", &hora, &minuto, &sentido, &distancia);

    int posicao = (hora * 6) + minuto / 10;
    if(sentido == 'H')
        posicao += distancia;
    else
        posicao -= distancia;

    posicao = (posicao % (12*6));

    if(posicao < 0)
        posicao += 72;

    hora = posicao / 6;
    minuto = (posicao % 6) * 10;

    printf("%02d %02d", hora, minuto);
    
}