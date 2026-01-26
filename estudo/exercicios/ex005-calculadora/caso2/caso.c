#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(int argc, char *argv[]) {
    setlocale(LC_ALL, "");

    int soma, sub, div, mult, num1, num2, op;

    printf("Digite 1 para somar. \n");
    printf("Digite 2 para subtrair. \n");
    printf("Digite 3 para dividir. \n");
    printf("Digite 4 para multiplicar. \n");

    scanf("%d", &op);

    printf("\n Informe o primeiro número: \n");
    scanf("%d", &num1);

    printf(" \n Informe o segundo número: \n");
    scanf("%d", &num2);

    system("cls");

    switch (op) {
    case 1:
        soma = num1 + num2;

        printf("Resultado: %d \n", soma);
        break;
    case 2:
        sub = num1 - num2;

        printf("Resultado: %d \n", sub);
        break;
    case 3: 
        if(num1 != 0 || num2 !=0) {
            div = num2 / num2;

            printf("Resultado: %d \n", div);
        } else {
            printf("Divisão por zero. \n");
        }
        break;
    case 4:
        mult = num1 * num2;

        printf("Resultado: %d \n", mult);
        break;
    default:
        printf("Opção Inválida");
        break;
    }
}