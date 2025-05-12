#include <stdio.h>
#include <stdlib.h>

int main(){
    //variáveis
    int i, n, pares=0;
    
    //repetição para digitar os números
    printf("Digite 10 números.\n");
    for(i=0;i<10;i++){
        printf("Digite o %d número: ",i+ 1);
        scanf("%d",&n);
        
        //soma dos valores pares digitados
        if(n %2 ==0){
            pares++;
        }
    }
    
    //mostra quantos números pares o usuário digitou
    printf("Os números pares digitados foram %d.",pares);
    
    return 0;
    
}