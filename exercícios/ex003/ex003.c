#include <stdio.h>

// Faça um algoritmo que leia dois valores inteiros A e B, se os valores de A e B forem iguais, deverá somar os dois valores,
// caso contrário devera multiplicar A por B. Ao final de qualquer um dos cálculos deve-se atribuir o resultado a uma variável C e
// imprimir seu valor na tela.

int main() {
	
	int A, B, soma, mult, res;
	int C = 19;
	
	printf("Informe o valor de A: \n");
	scanf("%d", &A);
	
	printf("Informe o valor de B: \n");
	scanf("%d", &B);
	
	printf("Valor informado %d. %d. \n", A, B);
	
	soma = A + B;
	mult = A * B;
	
	if(A == B) {
		printf("A soma dos valores = %d. \n", soma);
		
		if(A == B) {
			res = soma += C;
			
			printf("O resto da soma + C = %d. \n", res);
		}
	} else if(A != B) {
		printf("A multiplicacao dos valores = %d. \n", mult);
		
		if(A != B) {
			res = mult += C;
			
			printf("O resto da multiplicacao + C = %d. \n", res);
		}
	}
}
