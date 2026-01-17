#include <stdio.h>

// Faça um algoritmo que leia um valor qualquer e imprima na tela com um reajuste de 5%.

// 100 %5 > 1 * 5 = 5

int main() {
	
	int number, reajuste;
	
	printf("Digite um numero: \n");
	scanf("%d", &number);
	
	reajuste = (number / 100) * 5;
	
	printf("Resultado: %d. \n", reajuste);
	
}
