#include <stdio.h>
int main(){
    FILE* seila= fopen("PERDEU.txt", "r");
    if(seila == NULL){
        printf("Erro ao abrir arquivo.");
        return 1;
    }

    char arquivo;
    while(!(feof(seila))){
        arquivo = fgetc(seila); 
        putchar(arquivo);
    }
    fclose(seila);
    return 0;
}