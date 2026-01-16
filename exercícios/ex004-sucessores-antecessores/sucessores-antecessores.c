#include <stdio.h>

// Faça um algoritmo que receba um número inteiro e imprima na tela o seu antecessor e o seu sucessor.

int main() {
	
	int num = 0;
	int suc, ant;
	
	printf("Informe um valor: \n");
	scanf("%d", &num);
	
	ant = num -=1;
	num += 1;
	suc = num +=1 ;
	
	printf("Seu antecessor e: %d. \n", ant);
	
	printf("Seu sucessor e: %d. \n", suc);
}
