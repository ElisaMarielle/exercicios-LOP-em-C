#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int soma = 0;
    
    //escreve 1 numero ou alguma coisa até um total pré determinado
    //começa do 2 pois 2 é um número par e nada antes dele é
    for(int i=2;i<=200;i+=2){
        soma+=i;
    }
    
    //saída, mostra a soma dos números pares
    printf("A soma de todos os números pares é: %d",soma);
    
    return 0;
}
