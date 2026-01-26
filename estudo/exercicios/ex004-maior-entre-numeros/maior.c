#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* Faça um programa que receba dois números e mostre o maior deles. Caso eles sejam iguais, deve-se mostrar a mensagem "Os números são iguais." */

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");

    float num1, num2;

    printf("Informe o primeiro número: \n");
    scanf("%f", &num1);

    printf("Informe o segundo número: \n");
    scanf("%f", &num2);

    if(num2 > num1) {
        printf("%.2f é maior que %.2f. \n", num2, num1);
    } else if (num1 > num2) {
        printf("%.2f é maior que %.2f. \n", num1, num2);
    } else {
        printf("Os dois valores são iguais. \n");
    }

}