#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    //variável do switch
    int op;
    
    //faz algo (dentro do "do") até que (alguma condição - while)
    do{
        printf("1. Soma\n");
        printf("2. Subtair\n");
        printf("3. Sair\n");
        printf("\nEscolha: ");
        scanf("%d",&op);
        
        switch(op){
            case 1:
             printf("Opção inválida.\n");
             break;
            
            case 2:
             printf("Opção inválida.\n");
             break;
            
            case 3:
             printf("Encerrando...\n");
             break;
            
            default:
             printf("Opção inválida, tente novamente.\n");
             break;
        }
    }while(op!=3);
    
    
    return 0;
}
