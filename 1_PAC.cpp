#include <stdio.h>
#include <stdlib.h>

int main() {
    float num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    if (num1 > num2) {
        printf("O maior numero e: %.2f\n", num1);
    } else if (num2 > num1) {
        printf("O maior numero e: %.2f\n", num2);
    } else {
        printf("Os numeros sao iguais.\n");
    }

    return 0;
}