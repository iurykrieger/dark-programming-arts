#include<stdio.h>

int main(void)
{
    char nome[45];
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("\nSeu nome é: %s", nome);
    printf("\nSeu nome está guardado em: %p", &nome);
}