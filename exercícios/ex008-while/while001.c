#include <stdio.h>

int main() {
	
	int num, soma;
	
	while(num != 0) {
		printf("Digite um numero: \n");
		scanf("%d. \n", &num);
			
		soma = soma + num;
	}
	
	printf("Resultado:  %d. \n", soma);
	
}
