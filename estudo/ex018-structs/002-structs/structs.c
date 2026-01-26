#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <string.h>

#define TAM 3

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[50];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	tipo_pessoa lista[TAM];
	int i;
	
	for(i = 0; i < TAM; i++) {
		printf("Insira os dados (%d): \n", i+1);
		
		puts("Nome: ");
		fgets(lista[i].nome, sizeof(lista[i].nome), stdin);
		lista[i].nome[strcspn(lista[i].nome, "\n")] = '\0';
		
		puts("Idade: ");
		scanf("%d", &lista[i].idade);
		fflush(stdin);
		
		puts("Peso: ");
		scanf("%f", &lista[i].peso);
		
		getchar();
	}
	//limpa a tela
	system("cls");
	
	puts("Seus dados: \n");
	for(i = 0; i < TAM; i++) {
		printf("----- Pessoa %d ----- \n", i + 1);
		printf("\t Nome: %s \n", lista[i].nome);
		printf("\t Idade: %d \n", lista[i].idade);
		printf("\t Peso: %.2f \n", lista[i].peso);
	}
}
