# Fluxo de Controle #

Sem o fluxo de controle, o programa apenas seguiria linha por linha, sem capacidade de decisão ou repetição. O fluxo de controle representa o mecanismo fundamental que permite aos programas tomar decisões através de estruturas de decisão (condicionais) e executar tarefas repetitivas através de laços de repetição (estruturas de repetição). As estruturas de decisão, como if-else e switch, permitem que o programa escolha diferentes caminhos de execução baseados em condições específicas, enquanto os laços de repetição, como for, while e do-while, possibilitam a execução repetida de blocos de código até que determinadas condições sejam satisfeitas. Estes dois pilares do controle de fluxo transformam programas lineares em soluções dinâmicas capazes de resolver problemas complexos e adaptar-se a diferentes situações durante a execução.


# Condições #

As estruturas de decisão (ou estruturas condicionais) permitem ao programa escolher entre caminhos diferentes com base em uma condição. Isso torna o software adaptável a diferentes situações.

# Entendendo a Estrutura If/else em C #

A estrutura condicional mais comum é o if. Ela avalia uma expressão booleana – ou seja, uma condição que pode ser verdadeira (true) ou falsa (false).

Se a condição for verdadeira, um bloco de código é executado;

Se for falsa e houver um else, outro bloco é executado.

# Estrutura geral: #

if (condição) {
    // Código executado se a condição for verdadeira
} else {
    // Código executado se a condição for falsa
}


Exemplo: Verificação de Idade

Leitura da idade:

•
O programa exibe a mensagem "Digite sua idade: " e espera o usuário digitar um número inteiro;

•
Esse número é lido com scanf("%d", &idade); e armazenado na variável idade.

#include <stdio.h>

int main() {
    int idade;
    
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    
    if (idade >= 18) {
        printf("Acesso liberado: você é maior de idade.\n");
    } else {
        printf("Acesso negado: você é menor de idade.\n");
    }
    
    return 0;
}

O que acontece nesse programa?

Leitura da idade: o programa pede ao usuário para digitar a idade;

Avaliação da condição: idade >= 18 é verdadeiro ou falso?

Execução condicional: a. Se verdadeiro, imprime: "Acesso liberado...". b. Se falso, imprime: "Acesso negado...".

Uso do \n:

O \n ao final das mensagens serve para quebrar a linha, ou seja, move o cursor para a próxima linha no terminal após a mensagem ser exibida;

Isso melhora a formatação da saída, deixando o texto mais organizado.


# Condicionais Aninhadas: Decisões mais Detalhadas #

Às vezes, é preciso verificar mais de uma condição. Para isso, podemos usar um if dentro de outro if – o que chamamos de condicional aninhada.

Exemplo:

if (idade >= 18) {
    if (idade < 65) {
        printf("Adulto.\n");
    } else {
        printf("Idoso.\n");
    }
} else {
    printf("Menor de idade.\n");
}
Esse tipo de estrutura permite decisões hierárquicas, mas deve ser usada com cuidado para não dificultar a leitura do código.


# Combinações Lógicas #

# Operador          Significado             Exemplo
 &&                 E lógico                idade => 18 && renda > 1000

 ||                 OU lógico               idade < 500 || renda < 500

 !                  NÃO lógico              !(idade >= 18)


# Exemplo com operadores lógicos: #


if (idade >= 18 && idade < 65) {
    printf("Você está na idade adulta.\n");
} else {
    printf("Você é jovem ou idoso.\n");
}


# Condicionais Compostas #

Em muitos casos, enfrentamos situações que exigem múltiplas verificações combinadas. Essas situações frequentemente requerem o uso de estruturas condicionais aninhadas (também conhecidas como if aninhado), onde uma condição é testada dentro de outra condição, criando níveis hierárquicos de decisão. Veja o exemplo abaixo, que usa if, else if e else para simular um sistema de aprovação de cartão de crédito:

if (idade >= 18 && renda >= 2000) {
    printf("Aprovado para o cartão de crédito premium.\n");
} else if (idade >= 18 && renda >= 1000) {
    printf("Aprovado para o cartão de crédito básico.\n");
} else {
    printf("Não aprovado para cartão de crédito.\n");
}

Neste exemplo:

O programa analisa idade e renda para decidir qual cartão oferecer (ou se deve negar);

As verificações ocorrem em ordem, da mais restrita à mais geral.