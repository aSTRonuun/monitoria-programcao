#include <stdio.h>

int main(){

    int n = 0, flag = 1;
    scanf("%d", &n);

    for(int i=2;i<n;i++){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }

    printf("%d\n", flag);
}