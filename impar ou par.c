#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int n;
    
    //informa e guarda um número no sistema
    printf("Informe um número: ");
    scanf("%d",&n);
    
    //resolução
    if(n%2==0){
        printf("O número %d é par.",n);
    }
    else{
        printf("O número %d é impar.",n);
    }
    
    return 0;
}