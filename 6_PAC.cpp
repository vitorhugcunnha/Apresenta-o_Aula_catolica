//Faça um programa que verifique se a letra digitada for: F ou M e imprima uma mensagem: masculino, feminino ou sexo inválido.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char sexo;
    printf("Digite seu sexo (F/M): ");
    scanf(" %c", &sexo);

    if (sexo == 'F' || sexo == 'f') {
        printf("Feminino.\n");
    } else if (sexo == 'M' || sexo == 'm') {
        printf("Masculino.\n");
    } else {
        printf("Sexo invalido.\n");
    }

    return 0;
}