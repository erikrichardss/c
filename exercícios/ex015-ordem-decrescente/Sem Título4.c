#include <stdio.h>

/* Faça um algoritmo que leia três valores inteiros diferentes e imprima na tela os valores em ordem decrescente. */

int main() {
	
	int val[3];
	int cont, cont2, res;
	
	for(cont = 0; cont < 3; cont++) {
		printf("Informe um numero: \n");
		scanf("%d", &val[cont]);
		
		for(cont2 = cont; cont2 < 3; cont++) {
			if(val[cont] < val[cont2]) {
				res = val[cont2];
				printf("%d ", res);
			}
		}
	}
	
}
