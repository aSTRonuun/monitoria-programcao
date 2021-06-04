#include <stdio.h>

int main(){

    int x = 11;
    int n = 5;

    int cal1 = x % n;
    int cal2 = cal1 + n;
    int cal3 = cal2 % n;
    printf("%d\n", cal1);
    printf("%d\n", cal2);
    printf("%d\n", cal3);
}