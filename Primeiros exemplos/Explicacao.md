Explicação detalhada:

#include <stdio.h>

O que é: Diretiva de pré-processador;

Função: Diz ao compilador para incluir o conteúdo da biblioteca padrão stdio.h (Standard Input/Output);

Por que é necessário: Essa biblioteca contém funções de entrada e saída, como printf() e scanf();

Nota: O símbolo # indica que isso é tratado antes da compilação (pelo pré-processador).

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

int main()

O que é: Função principal do programa;

Função: É o ponto de entrada do programa --- onde a execução começa;

int: Indica que a função main retorna um valor inteiro;

Parênteses (): Indicam que a função não recebe argumentos (mas poderia: int main(int argc, char *argv[]));

Chaves {}: Delimitam o bloco de código que pertence à função.


"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

printf("Olá, mundo!\n");


O que é: Chamada da função printf() da biblioteca stdio.h;

Função: Imprime a mensagem "Olá, mundo!" no terminal;

\n: É um caractere especial que quebra a linha (move o cursor para a linha de baixo);

;: Todo comando em C termina com ponto e vírgula.

""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""

return 0;

O que é: Instrução que encerra a função main;

Função: Indica que o programa terminou com sucesso;

Por que 0: Por convenção, o valor 0 indica sucesso; outros valores indicam erro ou códigos específicos de retorno.