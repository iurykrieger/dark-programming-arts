#include<stdio.h>
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
    for(int indice = 0; indice < 2; indice++)
    {
        struct Produto produto;

        produto.nome = (char*)malloc(10);
        produto.descricao = (char*)malloc(10);

        printf("\nDigite o nome do produto: ");
        scanf("%s", produto.nome);

        printf("Digite o preço do produto: ");
        scanf("%f", &(produto.preco));

        printf("Digite a descrição do produto: ");
        scanf("%s", produto.descricao);

        printf("Digite o tamanho do produto: ");
        scanf("%d", &(produto.tamanho));


        printf("\n\nNome: %s", produto.nome);
        printf("\nDescrição: %s", produto.descricao);
        printf("\nPreço: %.2f", produto.preco);
        printf("\nTamanho: %d", produto.tamanho);
    }
}