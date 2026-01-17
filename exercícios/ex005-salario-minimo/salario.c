#include <stdio.h>

// Faça um algoritmo que leia o valor do salário mínimo e o valor do salário de um usuário, calcule quantos salários mínimos esse 
// usuário ganha e imprima na tela o resultado. (Base para o Salário mínimo R$ 1.620,99).

int main() {
	
	float saMin = 1620.99;
	float sal;
	float res;
	
	printf("Qual valor do seu salario? \n");
	scanf("%f", &sal);
	
	res = sal / saMin;
	
	printf("Voce recebe %.2f. salarios minimos. \n", res);
	
}
