#include <stdio.h>

// Faça um algoritmo para receber um número qualquer e imprimir na tela se o número é par ou ímpar, positivo ou negativo.

int main() {
	
	int number;
	
	printf("Digite um numero: \n");
	scanf("%d", &number); 
	
	printf("Numero digitado: %d. \n", number);
	
	if(number % 2 == 0) {
		printf("%d. e par \n", number);
	} else if(number % 2 == 1) {
		printf("%d. e impar \n", number);
	}
	
	if(number > 0) {
		printf("%d. e positivo \n", number);
	} else if(number < 0) {
		printf("%d. e negativo \n", number);
	}
}
