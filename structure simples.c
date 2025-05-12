#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//struct: estrutura ou grupo de variáveis
struct Pessoa{
    char nome[50];
    int idade;
    float nota;
    };
    
int main(){
    struct Pessoa aluno = {"Elisa", 16, 10.0};
        
    printf("Nome: %s \n", aluno.nome);
    printf("Idade: %d \n", aluno.idade);
    printf("Nota: %.1f \n", aluno.nota);
        
    return 0;
}
 