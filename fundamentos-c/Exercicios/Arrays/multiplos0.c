#include <stdio.h>
int main(){


    int n1,n2;
    scanf("%d %d", &n1,&n2);


    int vetor1[n1];
    for(int i = 0 ; i < n1 ; i++) scanf("%d",&vetor1[i]);

    int vetor2[n2];
    for(int i = 0 ; i < n2 ; i++) scanf("%d",&vetor2[i]);

    int cont;
    int vetor3[n1];
    for(int i = 0 ; i < n1 ; i++){
        cont = 0;
        for(int j = 0 ; j < n2 ; j++){
        if(vetor2[j] % vetor1[i] == 0)
        cont++;
        }
        vetor3[i] = cont;
        printf("%d ", vetor3[i]);

    }
    


    return 1;
}