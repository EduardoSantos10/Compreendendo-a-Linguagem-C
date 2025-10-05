#include <stdio.h>

int main(){

    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if(idade >= 18){
        if(idade < 65){
            printf("Você é um adulto\n");
        }else{
            printf("Você é um idoso\n");
        }

    }else{
        printf("Vocẽ é de menor\n");
    }
    return 0;
}