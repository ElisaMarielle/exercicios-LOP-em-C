#include <stdio.h>
#include <stdlib.h>

int main(){
    //variáveis
    int i, n[10], maior, menor;
    
    //repetição para digitar os números
    printf("Digite 10 números.\n");
    for(i=0;i<10;i++){
        printf("Digite o %d número: ",i+ 1);
        scanf("%d",&n[i]);
    }
    
    //o maior número digitado vai valer nessa variável/indice    
    maior=n[0];
    menor=n[0];
    
    //repetição de comparação para chegar em um número maior e um menor
    for(i=1;i<10;i++){
        
        if(n[i]>maior){
            maior=n[1];
        }
        if(n[i]<menor){
            menor=n[1];
        }
    }
    
    //mostra qual o maior e o menor número
    printf("O maior número é: %d",maior);
    printf("O menor número é: %d",menor);
    
    return 0;
    
}