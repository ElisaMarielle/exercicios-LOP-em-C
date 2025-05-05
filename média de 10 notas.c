#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int i;
    float notas[10], med, soma=0.0;
    
    //repetição de 10 números + o cálculo da soma
    for(i=0;i<10;i++){
        printf("Digite a nota %d: ",i+ 1);
        scanf("%f",&notas[i]);
        soma+=notas[i];
    }
    
    //resultado e soma das médias
    med= soma/6;
    printf("A média das notas é: %.1f",med);
    
    
    return 0;
}
