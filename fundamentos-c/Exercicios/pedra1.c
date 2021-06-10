#include <stdio.h>

int main(){

    int n=0, A = 0, B = 0, distancia = 0, melhor_dis = 0, ganhador = -1;
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        scanf("%d %d", &A, &B);
        if(A >= 10 && B >= 10){
            distancia = A - B;
            distancia = distancia < 0 ? -distancia : distancia;
            if((ganhador == -1) || (distancia < melhor_dis)){
                ganhador = i;
                melhor_dis = distancia;
            }
        }
    }

    if(ganhador != -1){
        printf("%d", ganhador);
    }else{
        printf("sem ganhador");
    }
}