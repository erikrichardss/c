#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

#define TAM 50

struct aluno {
	char nome[TAM];
	float nota[2];
	float media;
};

typedef struct aluno aluno;

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	aluno pes[4];
	int i, n;
	
	for(i = 0; i < 3; i++) {
		printf("\n Aluno (%d): \n", i + 1);
		getchar();
		fgets(pes[i].nome, sizeof(pes[i].nome), stdin);
		
		for(n = 0; n < 2; n++) {
			printf("Nota (%d): \n", n + 1);
			scanf("%f", &pes[i].nota[n]);
			
			pes[i].media = pes[i].media + pes[i].nota[n];
		}
		
		pes[i].media = pes[i].media / 2;
	}
	
	system("cls");
	
	puts("Resultado dos alunos: \n");
	for(i = 0; i < 3; i++) {
		printf("Nome: %s \n", pes[i].nome);
		printf("Média: %.2f \n", pes[i].media);
		
		if(pes[i].media >= 7) {
			printf("Aluno aprovado! \n");
		} else {
			printf("Aluno reprovado! \n");
		}
	}
	
	system("pause");
	
	return 0;
}
