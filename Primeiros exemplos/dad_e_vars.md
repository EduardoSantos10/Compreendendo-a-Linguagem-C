# Dados e Variavéis em C #

Tipos primitivos

* Armazenam numeros sem parte decimal

> short, int, long, long long

signed e unsigned (unsigned int idade = 25 -> pode ir de 0 a 4 bilhões)


Tipos de ponto flutuante

* Numeros com casas decimais

> float, double, long double


Tipo caractere

* armazena um unico caractere

char = 'A';
char = '5';
char = ' ';


Tipo booleano

* Para incluirmo o booleano no nosso sistema temos que utilizar a biblioteca "<stdbool.h>"

bool ativo = true;

true = diferente de 0
false = igual a 0


# Declaração, escopo e atribuição de variaveis #

int idade;
float salario;
char inicial;

> Também é possivel declarar varias vars de uma vez

int x, y, z;

> Ou já iniciar com um valor

int contador = 0;
float pi = 3.14;


# Regras para Nomes #

A linguagem C estabelece um conjunto específico de convenções sintáticas para a nomenclatura de variáveis, garantindo que o compilador possa distinguir adequadamente entre identificadores criados pelo programador e elementos reservados da linguagem. Estas regras asseguram a consistência do código e previnem conflitos durante o processo de compilação.

Começar com letra ou _

Pode conter letras, números e underscores

Não pode ser palavra reservada (int, return, etc.)

Diferencia maiúsculas de minúsculas (idade ≠ Idade)


# Escopo de variaveis #

* A linguagem C também faz uso do escopo de variaveis para delimitar seu codigo

Global -> é declarado fora das funções, porém é utilizado em todo programa
Local -> ele é declarado dentro das funções, é utilizado apenas dentro das funções
De bloco -> declarado dentro de colchetes {}, é utilizado somente dentro do bloco


# Atribuição de Valores #

* usamos = para realizar a atribuição de valores
int x; -> iniciou sem valor

x = 20; -> agora ela vale 20
y = 40  -> agora ela vale 40


# Processo de Entrada e Saída de Dados em C #

A comunicação entre o programa e o usuário é essencial para criar sistemas interativos.

Em C, isso é feito principalmente com as funções da biblioteca padrão <stdio.h>:

printf() -- saída de dados (imprimir na tela);

scanf() -- entrada de dados (ler do teclado).


# Saída de Dados com printf() #

printf() ->  permite mostrar informações na tela.

Ela usa especificadores de formato para representar diferentes tipos de dados:

%d -> inteiro || printf("%d", 42)

%f -> ponto flutuante || printf("%.2f", 3.14) Obs: numero 2 indica que terá "duas" casas decimais

%c -> caractere || printf("%c",'A')

%s -> String(texto) || prinf("%s","Olá")


# Entrada de Dados com scanf() #

* A função scanf() lê valores digitados pelo usuário.

> Ela usa os mesmos especificadores do printf(), mas com um detalhe importante:

> Use o operador & para passar o endereço da variável que armazenará o dado.


# Por que o espaço antes de %c? #

Evita que o scanf() capture espaços ou quebras de linha não intencionais que ficaram no buffer.


# Validação de Entrada com scanf() #

Para garantir a robustez do programa, é fundamental verificar se o usuário digitou corretamente.

O scanf() retorna o número de valores lidos com sucesso.

Exemplo: com verificação:

int numero;
printf("Digite um número: ");
if (scanf("%d", &numero) != 1) {
    printf("Entrada inválida!\n");
    return 1; // Encerra o programa com erro
}


# Tratamento de Dados #

Exibir na tela -> printf() || %d, %f, %c, %s || Usa valores diretamente

Ler do teclado -> scanf() || %d, %f, %c, %s || Usa % antes da variaveis (exceto strings)

Validar entrada -> retorno do scanf() || - || Retorna quantos valores foram lidos



# Operadores e expressões em C #

Operadores Aritméticos -> Realizam calculos matemáticos básicos

# Operador          Função          Exemplo
    +               Adição          a + b
    -               Subtração       a - b
    *               Multiplacção    a * b
    /               Divisão         a / b
    %               Módulo (resto)  a % b


# Cuidados com overflow: #

int a = 1000000;
int b = 1000000;
long long resultado = (long long)a * b;  // Cast para evitar overflow
printf("Resultado: %lld\n", resultado);              


# Divisão inteira vs. divisão real: #

int x = 7, y = 2;
int inteiro = x / y;        // Resultado: 3
float real = (float)x / y;  // Resultado: 3.5


# Módulo: #

int n = 17;
if (n % 2 == 0)
    printf("Par\n");
else
    printf("Ímpar\n");



# Operadores Relacionais #

Os operadores relacionais constituem elementos fundamentais para estabelecer comparações entre valores em linguagem C, permitindo que o programa tome decisões com base em condições específicas. Estas comparações retornam valores numéricos que representam estados lógicos: 0 para falso e 1 para verdadeiro, seguindo a natureza binária dos sistemas computacionais. Estes operadores são essenciais para estruturas de controle como condicionais e loops.

Tabela 8

Operador            Significado         Exemplo

==                  Igual a             x == y

!=                  Diferente de        x != y

<                   Menor que           x < y

>                   Maior que           x > y

<=                  Menor ou igual      x <= y

>=                  Maior ou igual      x >= y



# Operadores Lógicos #

Combinam condições booleanas

# Operador          Nome            Exemplo         Resultado

&&                  E lógico        cond1&&cond2    Verdadeiro se ambos forem verdadeiros

||                  OU lógico       cond1 || cond2  Verdadeiro se pelo menos um for verdadeiro

!                   NÃO lógico      !cond           Inverte o valor lógico



# Procedência de Operadores

* A ordem em que as operações são avaliadas "influência o resultado"

A linguagem C segue um sistema de precedência de operadores similar ao das expressões matemáticas convencionais, determinando a ordem de execução das operações quando múltiplos operadores estão presentes em uma expressão. Assim como na matemática, onde multiplicação tem precedência sobre adição, a linguagem C estabelece uma hierarquia rigorosa que define quais operações são realizadas primeiro, garantindo resultados consistentes e previsíveis. Quando operadores possuem a mesma precedência, a avaliação ocorre da esquerda para a direita (associatividade).


SEGUE A ORDEM:

1 - () parenteses

2 - ++, --, -, !

3 - *, /, %

4 - +, -

5 - <, <=, >, >=

6 - ==, !=

7 - &&

8 - ||

9 - =


# Exemplo: #

int resultado = 2 + 3 * 4;        // 2 + (3*4) = 14
int valor = 10 > 5 && 3 < 7;      // true && true = 1


Use parênteses para clareza:

int r = a + ((b * c) / d) - e;


# Operadores de Incremento e Decremento #


# Operador            Exemplo          Efeito
 
 ++                     x++             Incrementa após o uso (pós)

 ++                     ++x             Incremneta antes do uso (pré)

 --                     x--             Decrementa após o uso

 --                     --x             Decrementa antes do uso


int a = 5, b = 5;
int x = ++a;  // x = 6, a = 6
int y = b++;  // y = 5, b = 6


# Conversões de Tipo (Casting) #

Permite converter valores entre diferentes tipos.

# Conversão implícita:

int inteiro = 10;
float decimal = 3.5;
float resultado = inteiro + decimal; // inteiro vira float

# Conversão explícita (cast):

int a = 7, b = 2;
float div = (float)a / b; // Força divisão real

Converta com cuidado:
int grande = 300;
char pequeno = (char)grande; // Pode gerar valor inválido













