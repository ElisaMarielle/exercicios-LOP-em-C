#include <stdio.h>
#include <stdlib.h>

    //estrutura ou grupo de variáveis
typedef struct{
    char nome[50];
    
}Pessoa;


int main(){
    //variáveis
    Pessoa aluno[3];
    int i, busca, encontrado=0;
    
    //cadastrar o pessoas com nome
    for(int i=0;i<3;i++){
        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]",aluno[i].nome);
    }
    
    //pede um nome para procurar por ele
    printf("Digite um nome para procurá-lo: ");
    scanf("%s",aluno[i].nome);
    
    
    //faz a busca e dá o resultado se foi encontrado (em qual posição está) ou se não foi encontrado
    for(i=0;i<3;i++){
        if(aluno[i].nome ==busca){
            printf("Nome encontrado na posição %d (índice %d). %s \n",i+ 1, i, aluno[i].nome);
            encontrado = 1;
            break;
        }
    }
    if(!encontrado){
        printf("Nome não encontrado.");
    }
    
    return 0;

}