#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa {
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	//criando e inicializando
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("Início: \n");
	printf("pes.idade: #d \n", pes.idade);
	printf("pes.peso: %.2f \n", pes.peso);
	printf("pes.nome: %s \n", pes.nome);
	
	//atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Texto");
	
	printf("\n Alterando os campos via código: \n");
	printf("pes.idade: %d \n", pes.idade);
	printf("pes.peso: %.2f \n", pes.peso);
	printf("pes.nome: %s \n", pes.nome);
	
	//solicitando inserções via teclado
	printf("\n Insire um número inteiro: \n");
	scanf("%d", &pes.idade);
	printf("Insira um número real: \n");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("Insira uma palavra: \n");
	fgets(pes.nome, sizeof(pes.nome), stdin);
	
	printf("\n Alterando com dados do usuário: \n");
	printf("pes.idade: %d \n", pes.idade);
	printf("pes.peso: %.2f \n", pes.peso);
	printf("pes.nome: %s \n", pes.nome);
}
