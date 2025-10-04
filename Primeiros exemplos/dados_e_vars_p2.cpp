// Entrada de dados com scanf()

# include <stdio.h>

int main(){
    int numero;
    float preco;
    char categoria;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    printf("Digite um preço: ");
    scanf("%f", &preco);

    printf("Digite a categoria: ");
    scanf(" %c", &categoria); // %c colocar um espaço quando declarar "%C" é muito importante

    printf("Numero: %d, Preço: %f, Categoria: %c\n",
    numero, preco, categoria);

    return 0;
}