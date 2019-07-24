#include<stdio.h>
#include <stdlib.h>

int main(void)
{
    char *nome = (char*)malloc(10);
    printf("Digite seu nome: ");
    scanf("%s", nome);
    
    printf("\nSeu nome é: %s", nome);
    printf("\nSeu nome está guardado em: %p", &nome);
}