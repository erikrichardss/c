#include <stdio.h>

int main() {
	
	int idade = 0;
	float peso = 0.0;
	
	// %d está relacionado com o conteúdo 'idade' em memória
	printf("Valor inicial da idade: %d. \n", idade); 
	
	// scanf > especificador de formato > & + variavel
	printf("Digite uma idade: \n");
	scanf("%d", &idade);
	
	printf("Digite um peso: %f.", peso);
	scanf("%f", &peso);
	
	printf("Idade informada: %d. \n", idade);
	printf("Ano informado: %f. \n" ,peso);
}
