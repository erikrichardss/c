#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

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

    if(op == 1) {
        soma = num1 + num2;

        printf("Resultado: %d \n", soma);
    } else if(op == 2) {
        sub = num1 - num2;

        printf("Resultado: %d \n", sub);
    } else if(op == 3) {
        div = num2 / num2;

        printf("Resultado: %d \n", div);

        if(num1 == 0 || num2 == 0 ) {
            printf("Divisão por 0");
        }
    } else if(op == 4) {
        mult = num1 * num2;

        printf("Resultado: %d \n", mult);
    } else{
        printf("Opção Inválida");
    }
    
    return 0;
}