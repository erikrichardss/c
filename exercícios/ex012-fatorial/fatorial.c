#include <stdio.h>

int main() {
	
	int num1, num2, fatorial;
	
	for(num1 = 5; num1 >= 1; num1 --) {
		
		fatorial = fatorial * num1;
		
		printf("%d ", num1);
		
		printf("%d ", fatorial);	
		
	}
	
	printf("Fatorial de 5 e: %d. \n", fatorial);
}
