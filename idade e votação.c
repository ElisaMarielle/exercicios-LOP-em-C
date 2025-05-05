#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int id;
    
    //informa e guarda um número no sistema
    printf("Informe sua idade: \n");
    scanf("%d",&id);
    
    //resolução, compara os números até chegar numa resposta verdadeira
    //<16 nao vota, >=16 voto opcional, >=18 ate 70 obrigatório
    if(id<=70 && id>=18){
        printf("Voto obrigatório");
    }
    if(id>=16 && id<18){
        printf("Voto facultativo");
    }
    if(id<16){
        printf("Não vota");
    }
    if(id>70){
        printf("Voto facultativo");
    }
    
    return 0;
}