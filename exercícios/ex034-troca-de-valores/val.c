#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Faça um algoritmo que receba um valor A e B, e troque o valor de A por B e o valor de B por A e imprima na tela os valores. */

struct valor {
    int A, B, temp;
};

typedef struct valor valor;

int main(int argc, char *argv) {
    setlocale(LC_ALL, "");

    valor C;

    printf("Informe o valor de A: \n");
    scanf("%d", &C.A);

    printf("Informe o valor de B: \n");
    scanf("%d", &C.B);

    system("cls");

    printf("Valores inseridos A %d e B %d \n", C.A, C.B);

    C.temp = C.A;
    C.A = C.B;
    C.B = C.temp;
    
    printf("Valores trocados: \n");
    printf("A %d \n", C.A);
    printf("B %d \n", C.B);

    return 0;
}