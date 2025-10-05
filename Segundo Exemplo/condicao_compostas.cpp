#include <stdio.h>

int main(){
    int idade;
    int renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%d", &renda);

    if(idade >= 18 && renda >= 2000){
        printf("Você acesso ao cartão de crédito premium\n");
    }else if(idade >= 18 && renda >= 1000){
        printf("Você tem acesso ao cartão de crédito básico\n");
    }else{
        printf("Você não tem acesso ao cartão de crédito\n");
    }
    return 0;
}