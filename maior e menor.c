#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int n1, n2;
    
    //informa e guarda um número no sistema
    printf("Informe 2 números: \n");
    scanf("%d %d",&n1, &n2);
    
    //resolução, compara os números até chegar numa resposta verdadeira
    if(n1>n2){
        printf("O número %d é maior que o número %d.",n1,n2);
    }
    if(n2>n1){
        printf("O número %d é maior que o número %d.",n2,n1);
    }
    if(n1==n2){
        printf("Os números são iguais.");
    }
    
    return 0;
}