#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    int i, n, fat=1;
    
    //informa e guarda um número no sistema, opção do usuário
    printf("Informe um número para fazer seu fatorial: ");
    scanf("%d",&n);
    
    //fatorial
    //indica como o fatorial funciona e sua conta
    for(i=1;i<=n;i++){
        fat= fat * i;
    }
    
    //saída, mostra o fatorial calculado
    printf("O fatorial do número %d é: %d",n,fat);
    
    return 0;
}
