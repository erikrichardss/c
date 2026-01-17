#include <stdio.h>

#include <stdbool.h>

// Faça um algoritmo que leia dois valores booleanos (lógicos) e determine se ambos são VERDADEIRO ou FALSO.

int main() {
	
	bool number1;
	bool number2;
	
	printf("Digite um numero: \n");
	scanf("%d.", &number1);
	
	printf("Digite outro numero: \n");
	scanf("%d", &number2);

	printf("E maior? %d. \n", number1 > number2);
	printf("E menor? %d. \n", number1 < number2);
	printf("E igual? %d. \n", number1 == number2);
	printf("%d. \n", 10 == 10);
}
