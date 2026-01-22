#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat, cont;
	float notas[4];
	float media;
	char nome[50];
	
	mat = 4;
	cont = 0;
	media = 0;
	
	printf("Informe seu nome: \n");
	fgets(nome, sizeof(nome), stdin);
	
	for(cont = 0; cont < 4; cont ++) {
		printf("Informe sua nota: \n");
		scanf("%f", &notas[cont]);
		media = media + notas[cont];
	}
	getchar();
	
	media = media / mat;
	
	printf("Média: %.2f. \n\n", media);
	
	if(media >= 7) {
		puts(nome);
		printf("você foi aprovado!");
	} else {
		puts(nome);
		printf("você foi reprovado!");
	}
	
	system("pause");
	
	return 0;
}
