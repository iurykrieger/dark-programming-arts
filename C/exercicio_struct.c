#include <stdio.h>
#include <stdlib.h>

struct Produto
{
    char *nome;
    char *descricao;
    float preco;
    int tamanho;
};

int main(void)
{
    struct Produto produtos[2];

    for (int indice = 0; indice < 2; indice++)
    {
        
        struct Produto produto;

        produto.nome = (char *)malloc(10);
        produto.descricao = (char *)malloc(10);

        printf("Digite o nome do produto (sem espaços): ");
        scanf("%s", produto.nome);

        printf("Digite o preço do produto (com ponto no lugar de virgula): ");
        scanf("%f", &(produto.preco));

        printf("Digite a descrição do produto (sem espaços): ");
        scanf("%s", produto.descricao);

        printf("Digite o tamanho do produto de 1 a 10: ");
        scanf("%d", &(produto.tamanho));

        produtos[indice] = produto;
    }

    for (int indice = 0; indice < 2; indice++) {
        printf("\nNome: %s", produtos[indice].nome);
        printf("\nDescrição: %s", produtos[indice].descricao);
        printf("\nPreço: %.2fR$", produtos[indice].preco);
        printf("\nTamanho: %d", produtos[indice].tamanho);

    }

}