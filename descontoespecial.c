#include <stdio.h>

int main(){
    int idade;
    float renda;
    /* 
    programa que verifica se uma pessoa está qualificada para um 
    desconto especial com base na idade e renda mensal.
    A pessoa deve ter mais de 60 anos ou menos de 18 anos e ter
    uma renda mensal abaixo de R$2000,00*/

    printf("Digite a sua idade: ");
    scanf("%d", &idade);
    printf("Digite a sua renda mensal: ");
    scanf("%f", &renda);

    if(idade<= 18 || idade >= 60){
        if(renda < 2000){
            printf("Você tem direito ao desconto!\n");
        }else{
            printf("Você não tem direito ao desconto devido a renda!\n");
        }
    
    } else{
        printf("Você não atende aos critérios devido a idade\n");
    }
}