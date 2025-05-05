#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int i, n, tab;
    
    //opção
    printf("Digite um número para ver a tabuada: ");
    scanf("%d",&n);
    
    //escreve 1 numero ou alguma coisa até um total pré determinado
    for(i=0;i<=10;i++){
        printf(" %d x %d : %d\n",n, i, tab=n * i);
    }
    
    return 0;
}
