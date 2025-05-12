#include <stdio.h>
#include <stdlib.h>

    //estrutura ou grupo de variáveis
typedef struct{
    char nome[50];
    int quant;
    float preco;
}Produtos;


int main(){
    
    //variáveis
    int i;
    float total[5];
    Produtos prod[5];
    
    //cadastrar o produtos para contar o total
    for(int i=0;i<5;i++){
    printf("Nome do produto %d: ",i+ 1);
    scanf("%s",prod[i].nome);
    printf("Preço do produto %d: ",i+ 1);
    scanf("%f",&prod[i].preco);
    printf("Quantidades do produto %d: ",i+ 1);
    scanf("%d",&prod[i].quant);
    }
    
    //calcula o preço dos produtos com base nas informações dadas pelo usuário
    for(i=0;i<5;i++){
        total[i]=prod[i].preco*prod[i].quant;
    }
    
    //mostra o total
    for(i=0;i<5;i++){
        printf("\n%s: R$%.2f\n",prod[i].nome,total[i]);
    }
    
    return 0;

}