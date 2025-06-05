//Faça um programa que peça um número e imprima se o número é par ou ímpar. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("O numero %d e par.\n", numero);
    } else {
        printf("O numero %d e impar.\n", numero);
    }

    return 0;
}