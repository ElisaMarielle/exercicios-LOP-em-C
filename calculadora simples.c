#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    //variáveis
    float n1, n2, soma, sub, mult, divi;
    char op;
    
    //informa e guarda um número no sistema, além do usuário fazer uma decisão
    printf("Informe 2 números: \n");
    scanf("%f %f",&n1, &n2);
    printf("Informe uma operação matemática: ");
    printf(" + : Soma, - : Subtração, * : Multiplicação, / : Divisão \n");
    scanf(" %c",&op);
    //%c > 1 caractere, usado com o char
    
    //contas
    soma=n1+n2;
    sub=n1-n2;
    mult=n1*n2;
    divi=n1/n2;
    
    //para escolher entre uma das opções digitadas (operacoes) e dá o resultado de acordo com a opção escolhida
    switch(op){
        //caso o usuário escolha + (soma)
        case '+':
         printf("A soma é: %.1f",soma);
         //fim do case 1(+)
         break;
        
        //caso o usuário escolha - (subtracao)
        case '-':
         printf("A subtração é: %.1f",sub);
         break;
        
        //caso o usuário escolha * (multiplicacao)
        case '*':
         printf("A multiplicação é: %.1f",mult);
         break;
        
        //caso o usuário escolha / (divisao)
        case '/':
         printf("A divisão é: %.1f",divi);
         break;
         
        //caso o usuário aperte outra opcao senão aquelas dadas, diz que opcao é inválida
        default:
         printf("Opção inválida.");
         break;
    }
    
    
    
    return 0;
}