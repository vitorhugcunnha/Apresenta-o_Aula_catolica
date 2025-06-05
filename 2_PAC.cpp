//Faça um programa que peça um valor e mostre na tela se o valor é positivo ou negativo.

#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor;
    printf("Digite um valor: ");
    scanf("%f", &valor);

    if (valor > 0) {
        printf("O valor e positivo.\n");
    } else if (valor < 0) {
        printf("O valor e negativo.\n");
    } else {
        printf("O valor e zero.\n");
    }

    return 0;
}