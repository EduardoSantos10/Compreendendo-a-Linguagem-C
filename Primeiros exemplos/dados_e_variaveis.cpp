// Tipos de dados e variaveis em C

// Incluindo o tipo booleano
#include <stdbool.h>

bool ativo = true;

// Exemplo de variaveis com, escopos globais, locais e de blocos


#include <stdio.h>

int global = 100; // var global (usado em todo codigo)

int main(){
    int local = 50; // usado apenas dentro das funções
    if (local > 0){
        int bloco = 25; // var de bloco
        // dentro da função; global, local e de bloco são visiveis
    }
    // Aqui de bloco não é visivel
    return 0;
}

#include <stdio.h>

int main(){
    
    int idade = 25;
    float altura = 1.80;
    char inicial = 'E';

    printf("Idade: %d anos\n", idade); // Declaração em int
    printf("Altura: %.2f metros\n", altura); //Declaração em float
    printf("Inicial %c \n", inicial); // Declaração em caractere

    return 0;

}
