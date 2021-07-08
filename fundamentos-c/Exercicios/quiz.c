#include <stdio.h>

int main() {
    char qa, qb, qc, qd;
    int rf;
    scanf("%c %c %c %c", &qa, &qb, &qc, &qd);
    rf=0;
    if (qa== 'd'){
        rf++;
    }
    if (qb == 'a'){
        rf++;
    }
    if (qc == 'c'){
        rf++;
    }
    if (qd == 'd'){
        rf++;
    }
    printf("%d\n", rf);
    switch(rf){
        case 0:
            printf("Nunca assitiu\n");
            break;
        case 1:
            printf("Ja ouviu falar\n");
            break;
        case 2:
            printf("Interessado no assusto\n");
            break;
        case 3:
            printf("Fa\n");
            break;
        case 4:
            printf("Super fa\n");
            break;    
    }   
}