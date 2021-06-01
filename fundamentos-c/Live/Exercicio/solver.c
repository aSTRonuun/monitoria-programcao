#include <stdio.h>
int main(){
    int hora, minuto, dist;
    char sentido;
        scanf("%d %d %c %d", &hora, &minuto, &sentido, &dist);
    /*
    1h - 6cm / total = 72cm
    */

    int posi = ((hora * 6 ) + minuto) / 10;

    if(sentido == 'H'){
        posi = (posi + dist) % 72;
    }
    else{
        posi = (posi - dist) % 72;
        if(posi < 0) posi = posi + 72;
    }
        printf("%02d %02d\n", posi / 6, 10 * (posi % 6));
}