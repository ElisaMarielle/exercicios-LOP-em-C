#include <stdio.h>
#include <stdlib.h>

    //estrutura ou grupo de variáveis
typedef struct{
    char nome[50];
    float nota[3];
}Pessoa;


int main(){
    //variáveis
    Pessoa aluno;
    float media;
    int i;
    
    //cadastrar o pessoas com nome e idade
    printf("Digite o nome do aluno: ");
    scanf(" %[^\n]",aluno.nome);
    //repetição para digitar a nota
    for(int i=0;i<3;i++){
        printf("Digite a nota do aluno: ");
        scanf("%f",&aluno.nota[i]);
    }
    
    //calcula a média dos alunos
    media=(aluno.nota[0]+ aluno.nota[1]+ aluno.nota[2])/3;
    
    //compara a nota e mostra a média do aluno e se ele está aprovado
    if(media>=7){
        printf("\n Aluno: %s, média: %.2f. Aprovado!",aluno.nome, media);
    }
    if(media<7){
        printf("\n Aluno: %s, média: %.2f. Reprovado!",aluno.nome, media);
    }
    
    return 0;

}