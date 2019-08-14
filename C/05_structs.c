#include <stdio.h>
#include <stdlib.h>

struct Precos
{
    float price;
    float oldPrice;
    int installmentCount;
    float installmentValue;
};

struct Produto
{
    char *nome;
    char *descricao;
    struct Precos precos;
    int tamanho;
};


int main(void)
{
    int quantidadeDeProdutos;

    printf("Digite a quantidade de produtos que deseja inserir: ");
    scanf("%d", &quantidadeDeProdutos);

    struct Produto produtos[quantidadeDeProdutos];

    for (int indice = 0; indice < quantidadeDeProdutos; indice++)
    {
        
        struct Produto produto;

        produto.nome = (char *)malloc(10);
        produto.descricao = (char *)malloc(10);

        printf("\nDigite o nome do produto (sem espaços): ");
        scanf("%s", produto.nome);

        printf("Digite o preço do produto (com ponto no lugar de virgula): ");
        scanf("%f", &(produto.precos.price));

        printf("Digite a descrição do produto (sem espaços): ");
        scanf("%s", produto.descricao);

        printf("Digite o tamanho do produto de 1 a 10: ");
        scanf("%d", &(produto.tamanho));

        produtos[indice] = produto;
    }

    for (int indice = 0; indice < quantidadeDeProdutos; indice++) {
        printf("\n\nNome: %s", produtos[indice].nome);
        printf("\nDescrição: %s", produtos[indice].descricao);
        printf("\nPreço: R$%.2f", produtos[indice].precos.price);
        printf("\nTamanho: %d", produtos[indice].tamanho);

    }

}