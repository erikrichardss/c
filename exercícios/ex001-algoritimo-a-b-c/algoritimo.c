#include <stdio.h>

//  Faça um algoritmo que leia os valores de A, B, C e em seguida imprima na tela a soma entre A e B é mostre se a soma é menor que C.

int main() {
	
	int A, B, soma;
	int c = 23;
	
	printf("Inclua o valor de A: %d. \n", A);
	scanf("%d", &A);
	
	printf("Inclua o valor de B: %d. \n", B);
	scanf("%d", &B);
	
	soma = A + B;
	
	printf("A soma entre A + B = %d. \n", soma);
	
	if(soma < c) {
		printf("A soma entre A + B e menor do que C");
	} else {
		printf("A soma entre A + B e maior do que C");
	}
}
