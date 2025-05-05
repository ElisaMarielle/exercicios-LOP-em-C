#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    float n1, n2, media;
    
    //informa e guarda um número no sistema
    printf("Informe 2 notas: \n");
    scanf("%f %f",&n1, &n2);
    
    //conta
    media=(n1+n2)/2;
    
    //resolução, compara os números até chegar numa resposta verdadeira
    if(media>=7){
        printf("Aluno aprovado com média %.1f",media);
    }
    else{
        printf("Aluno não aprovado com média %.1f",media);
    }
    
    return 0;
}