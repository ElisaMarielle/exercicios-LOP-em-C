#include <stdio.h>
#include <stdlib.h>

    //estrutura ou grupo de variáveis
typedef struct{
    char nome[50];
    int idade;
}Pessoa;


int main(){
    //variáveis
    Pessoa cid[2];
    
    //cadastrar o pessoas com nome e idade
    for (int i=0;i<2;i++){
        printf("Digite o nome da pessoa %d: ",i+ 1);
        scanf(" %[^\n]",cid[i].nome);
        printf("Digite a idade da pessoa %d: ",i+ 1);
        scanf("%d",&cid[i].idade);
    }
    
    //compara o valor das idades dadas e mostra quem é a mais velha
    if(cid[0].idade>cid[1].idade){
        printf("%s é a mais velha.",cid[0].nome);
    }
    else{
        printf("%s é a mais velha.",cid[1].nome);
    }
    
    return 0;

}