//Faça um programa que verifique se uma letra digitada é vogal ou consoante.

#include <stdio.h>
#include <stdlib.h>

int main() {
    char letra;
    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'A' || letra == 'e' || letra == 'E' || letra == 'i' || letra == 'I' || letra == 'o' || letra == 'O' || letra == 'u' || letra == 'U'){
        printf("E uma vogal.\n");
    } else if ((letra >= 'a' && letra <= 'z') || (letra >= 'A' && letra <= 'Z')) {
        printf("E uma consoante.\n");
    } else {
        printf("Nao e uma letra valida.\n");
    }

    return 0;
}