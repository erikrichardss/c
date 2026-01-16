#include <stdio.h>

#define texto "Entrada e saida de dados."

int main(){
	printf("%s\n", texto);
	
	// char recebe colchetes pois cada char representa 8 bits de memória, e para armazenar blocos de textos, colocamos entre colchetes o tanto de caracteres que desejamos
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade: \n");
	scanf("%d", &idade);
	
	printf("Digite a altura: \n");
	scanf("%f", &altura);
	
	printf("Digite o nome: \n");
	scanf("%s", &nome);
	
	printf("Dados informados: \n");
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f. \n", altura);
	printf("Nome: %s. \n", nome);
}
