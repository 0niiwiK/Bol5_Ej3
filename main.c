#include <stdio.h>

int main() {
    int altura, espacios = 1;
    char caracter;
    printf("Introduce la altura del triangulo: ");
    scanf("%d", &altura);
    fflush(stdin);
    int tabulado = altura-1;
    printf("Introduce el caracter a utilizar: ");
    scanf("%c", &caracter);
    fflush(stdin);
    for (int piso=1; piso <= altura; piso++) {
        // Espacios iniciales
        for (int i = 1; i <= tabulado; i++) {
            printf(" ");
        }

        // Caracter
        printf("%c",caracter);
        for (int i = 0; i < espacios-2; i++) {
            if (piso!=altura)
                printf(" ");
            else
                printf("%c",caracter);
        }
        if (piso != 1)
            printf("%c",caracter);
        printf("\n");
        espacios=espacios+2;
        tabulado--;
    }
    return 0;
}
