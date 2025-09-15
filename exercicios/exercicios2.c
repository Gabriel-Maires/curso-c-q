#include <stdio.h>

// Objetivo do programa: Perguntar o nome de quem está usando o programa e sua idade. Faça duas perguntas.

int main() {
    char nome[50];
    int idade;

    printf("Olá Seja bem-vindo! Por gentileza, digite o seu nome: ");
    fgets(nome, sizeof(nome), stdin);
    printf("Maravilha! Agora, por gentileza, digite sua idade: ");
    scanf("%d", &idade);

    printf("Oi %s", nome);
    printf("Sua idade é de %d \n", idade);

    return 0;
}
