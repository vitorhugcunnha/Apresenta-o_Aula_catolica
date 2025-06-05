//Faça um programa que peça um número e se este número for par, transforme-o em ímpar e vice-versa. 

#include <stdio.h>
#include <stdlib.h>

int main() {
    int numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        numero = numero + 1;
        printf("O numero era par, agora e impar: %d\n", numero);
    } else {
        numero = numero - 1;
        printf("O numero era impar, agora e par: %d\n", numero);
    }

    return 0;
}