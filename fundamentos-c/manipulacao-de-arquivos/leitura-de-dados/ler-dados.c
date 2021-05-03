#include <stdio.h>

int main(void){

    FILE *file;
    file = fopen("numeros.txt", "r");
    if(file == NULL){
        printf("Arquivo nao pode ser aberto\n");
        return 0;
    }
    int x, y, z;

    fscanf(file, "%d %d %d", &x, &y, &z);
    printf("%d %d %d\n", x, y, z);

    fclose(file);
    return 0;
}