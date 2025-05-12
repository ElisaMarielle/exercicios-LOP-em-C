#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int vt[5], i;
    
    //informa e guarda um número no sistema
    for(i=0;i<5;i++){
    printf("Digite o %d número: ",i+ 1);
    scanf("%d",&vt[i]);
    }
    
    //saída, imprime os números de forma invertida
    printf("Números invertidos: ");
    for(i=4;i>=0;i--){
        printf("%d ",vt[i]);
    }
    
    return 0;
}