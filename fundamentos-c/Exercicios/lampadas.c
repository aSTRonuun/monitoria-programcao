#include <stdio.h>

int main() {
    int lamp1 = 0, lamp2 = 0;
    int quantidade = 0;

    scanf("%d", &quantidade);

    while(quantidade--){
        int aperto = 0;
        scanf("%d", &aperto);
        if(aperto == 1)
            lamp1 = (lamp1 == 0) ? 1 : 0;
        else{
            lamp1 = (lamp1 == 0) ? 1 : 0;
            lamp2 = (lamp2 == 0) ? 1 : 0;
        }
    }

    printf("%d\n%d", lamp1, lamp2);
}