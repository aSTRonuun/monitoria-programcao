#include <stdio.h>

int main(){

    //Inicialização
    char op1 = ' ';
    int num1 = 0;
    int num2 = 0;
    int qtd = 0;
    scanf("%d", &qtd);
    //Entrada dados
    while(qtd--){
        scanf(" %c %d %d", &op1, &num1, &num2);

        //Logica 
        if(((op1 == 'p') && (num1 + num2) % 2 == 0) ||
            ((op1 == 'i') && (num1 + num2) % 2 == 1 )){
                printf("jog1\n");
            }
        else{
            printf("jog2\n");
        }
    }
    
    //Saida dos dados
}