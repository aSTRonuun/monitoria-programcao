#include <stdio.h>

void escreverNoArquivo(FILE *file){
    fprintf(file, "Hello Word.");
    fclose(file);
}

int main(void){

    FILE *file;
    file = fopen("teste.txt", "w");

    escrever(file);

    return 0;
}