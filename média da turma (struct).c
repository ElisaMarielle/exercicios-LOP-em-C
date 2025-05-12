#include <stdio.h>
#include <stdlib.h>

    //estrutura ou grupo de variáveis
typedef struct{
    char nome[50];
    float nota[5];
}Pessoa;


int main(){
    //variáveis
    Pessoa aluno[5];
    float media;
    int i;
    
    //repetição para cadastrar o pessoas com nome e média final
    for(int i=0;i<5;i++){
        printf("\nDigite o nome do aluno %d: ",i+ 1);
        scanf(" %[^\n]",aluno[i].nome);
        printf("\nDigite a média final do aluno %d: ",i+ 1);
        scanf("%f",&aluno[i].nota[i]);
    }
    
    //calcula a média da sala
    media=(aluno[0].nota[0]+ aluno[1].nota[1]+ aluno[2].nota[2]+ aluno[3].nota[3]+ aluno[4].nota[4])/5;
    
    //mostra a média da turma
    printf("A média geral da turma é: %.2f",media);
    
    return 0;

}