#include <stdio.h>

int main(){
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18 && idade < 50){
        printf("Você é um adulto\n");
    }else{
        printf("Você é idoso\n");
    }
}