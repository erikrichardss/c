#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>


// Fórmula do IMC = peso / (altura) ²

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[50];
	float peso, altura, IMC;
	
	printf("Digite seu nome: \n");
	fgets(nome, sizeof(nome), stdin);
	
	printf("Digite seu peso: \n");
	scanf("%f", &peso);
	
	printf("Digite sua altura: \n");
	scanf("%f", &altura);
	
	IMC = peso / (altura * altura);
	
	printf("Seu IMC: %.2f. \n", IMC);
	
	if(IMC < 18.5) {
		printf("você está baixo do peso ");
	} else if(IMC >= 18.5 && IMC <= 24.9) {
		printf("você está com peso ideal (parabéns)");
	} else if(IMC >= 25.0 && IMC <= 29.9) {
		printf("você está levemente acima do peso");
	} else if(IMC >= 30.0 && IMC <= 34.9) {
		printf("Você está com Obesidade grau I ");
	} else if(IMC >= 35 && IMC <= 39.9) {
		printf("Você está com Obesidade grau II (severo)");
	} else if(IMC >= 40.0) {
		printf("Você está com Obesidade grau III (mórbida)");
	}
	
	
	return 0;
}
