#include <stdio.h>

/*
Inversão de vetor

Enunciado
Crie um algoritmo que:
Leia 8 números inteiros e armazene em um vetor.
Crie um segundo vetor com os elementos do primeiro em ordem inversa.
Exiba os dois vetores.
*/

int main() {
	
	int vetor[8];
	int vetorInv[8];
	int inte;
	
	for(inte = 0; inte <= 7; inte ++) {
		printf("Insira um numero: \n");
		scanf("%d", &vetor[inte]);
	}
	
	printf("Elementos inseridos: \n");
	
	for(inte = 0; inte <= 7; inte ++) {
		printf("%d ", vetor[inte]);
		vetorInv[inte] = vetor[inte];
	}
	
	printf("\n Valor inverso: \n");
	
	for(inte = 7; inte >= 0; inte--) {
		printf("%d ", vetorInv[inte]);
	}
	
}
