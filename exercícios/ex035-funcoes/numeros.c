#include <stdio.h>
#include <stdlib.h>

int ParImpar(int num1, int num2, int num3);
int maior(int num1, int num2, int num3);

int main() {

    int a, b, c, parImpar, maiorDe;

    printf("informe um número: \n");
    scanf("%d", &a);

    printf("Informe outro número: \n");
    scanf("%d", &b);

    printf("Informe outro numero: \n");
    scanf("%d", &c);

    parImpar = ParImpar(a, b, c);
    maiorDe = maior(a, b, c);

    printf("Números pares e impares: \n %d \n", parImpar);
    printf("Maior de todos: \n %d \n", maiorDe);

    return 0;
}

int ParImpar(int num1, int num2, int num3) {
    if(num1 %2 == 0) {
        printf("%d e par. \n", num1);
    }else {
        printf("%d e impar. \n", num1);
    }
    
    if(num2 %2 == 0) {
        printf("%d e par. \n", num2);
    }else {
        printf("%d e impar. \n", num2);
    }

    if(num3 %2 == 0) {
        printf("%d e par. \n", num3);
    } else {
        printf("%d e impar. \n", num3);
    }
}

int maior(int num1, int num2, int num3) {
    if(num1 >= num2 && num1 >= num3) {
        return num1;
    } else if(num2 >= num1 && num2 >= num3) {
        return num2;
    } else {
        return num3;
    }
}