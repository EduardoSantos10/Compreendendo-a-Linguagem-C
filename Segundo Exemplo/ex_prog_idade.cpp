#include <stdio.h> // inicia o sistema com uma biblioteca || sem isso, é impossivel

int main(){ // Main para iniciar

    int idade; // declarei a variavei "idade"

    printf("Digite sua idade: "); // solicitei ao usuario que digitasse sua idade
    scanf("%d", &idade); // o sistema leu o numero digitado

    if(idade >= 18){ // faço a comparação do numero digitado, se é maior com o condicional
        printf("Acesso liberado, você é de maior de idade\n"); // caso a resposta seja verdadeira
    }else{ // se não
        printf("Acesso liberado, você é de menor de idade\n"); // caso a resposta seja falsa
    }
    return 0; // aqui fecha o programa
}