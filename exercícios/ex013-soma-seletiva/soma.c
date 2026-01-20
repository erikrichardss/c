#include <stdio.h>

/*
Soma seletiva de elementos

Enunciado
Crie um algoritmo que:
Leia 10 números inteiros e armazene em um vetor.
Calcule a soma apenas dos números pares.
Mostre o resultado da soma.
*/

int main() {
	
	int vetor[10];
	int soma, i;
	
	for(i = 0; i <= 9; i++){
		printf("Digite um numero: \n");
		scanf("%d ", &vetor[i]);
	}
	
	for(i = 0; i < 10; i ++) {
		printf("%d + \n", vetor[i]);
		
		if(vetor[i] % 2 == 0) {
			soma = soma + vetor[i];
		} else{
			continue;
		}
	}
	
	printf("O resultado da soma dos valores pares: %d. \n", soma);
	return 0;
	
}
