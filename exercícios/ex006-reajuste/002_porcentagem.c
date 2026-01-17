#include <stdio.h>

int main() {
	
	int num, reaj, porcen;
	
	printf("Digite um numero: \n");
	scanf("%d", &num);
	
	printf("Digite a porcentagem: \n");
	scanf("%d", &porcen);
	
	reaj = (num / 100) * porcen;
	
	printf("O resultado e: %d. \n", reaj);
	
}
