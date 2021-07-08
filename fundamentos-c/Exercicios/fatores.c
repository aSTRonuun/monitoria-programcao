#include <stdio.h>

int main (){

    int value;
    int count = 2;
    scanf("%d", &value);

    while(value != 1){
        int fatores = 0;
        while(value % count == 0){
            value = value / count;
            fatores += 1;
        }
        if(fatores > 0)
            printf("%d %d\n", count, fatores);
        count += 1;
    }
}