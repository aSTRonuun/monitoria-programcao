#include <stdio.h>

int main(void){
    //Inicializa a variavel n
    int n = 0;
    scanf("%d", &n);
    
    //Inicializa no vetor
    int vetor[n];
    for(int i=0;i<n;i++){
      scanf("%d", &vetor[i]);

      // tudo que esta aqui dentro é um scopo do for
    }

    printf("[");
    for(int i=n-1;i >= 0;i--){
      printf("%d ", vetor[i]);
    }
    printf("]");
}