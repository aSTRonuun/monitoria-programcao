#include <stdio.h>

int main(void){

    FILE *file;
    file = fopen("teste.txt", "w");
    fprintf(file,"Meu primeiro teste no arquivo.txt!");
    fclose(file);


    return 0;
}