#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/* Faça algoritmo que leia o nome e a idade de uma peso e imprima na tela o nome da pessoa e se ela é maior ou menor de idade.  */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	int idade;
	
	printf("Diga seu nome: \n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Diga sua idade: \n");
	scanf("%d", &idade);
	getchar();
	
	if(idade < 18) {
		puts(nome);
		puts("Você é menor de idade.");
	} else {
		puts(nome);
		puts("Você é maior de idade.");
	}
	
	system("pause");
	
	return 0;
}
