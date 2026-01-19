#include <stdio.h>

int main() {
	
	int num1, num2, fatorial;
	
	printf("Digite um numero: \n");
	scanf("%d", &num1);
	
	num2 = num1;
	fatorial = 1;
	
	while(num1 >= 1) {
		
		fatorial = fatorial * num1;
		
		printf("%d x ", num1);

		num1 --;
		
	}
	
	printf("\n");
	printf("O fatorial de %d e %d", num2, fatorial);
}
