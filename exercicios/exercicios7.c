#include <stdio.h>

// Objetivo do programa: Calcule a área de um retângulo
// Area = comprimento * altura

int main() {

    float comprimento;
    float altura;

    printf("Olá Seja bem-vindo! Por gentileza, digite o comprimento do triangulo: ");
    scanf("%f", &comprimento);
    printf("Ótimo, agora, digite a altura do triangulo: ");
    scanf("%f", &altura);

    float calculo = (comprimento * altura);
    printf("A área do triangulo é: %.2f", calculo);

    return 0;

}
