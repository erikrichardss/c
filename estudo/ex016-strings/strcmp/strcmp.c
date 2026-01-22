#include <stdio.h>
#include <string.h>
#include <locale.h>

#define N 50

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	char hardText[N] = {"/exit"};
	char senha_usr[N];
	int ok;
	
	printf("Digite um texto: \n");
	gets(senha_usr);
	
	/* Faz uma comparação se um dado string é igual ao outro */
	ok = strcmp(hardText, senha_usr);
	
	if(ok == 0) {
		printf("Textos iguais.\n");
	} else {
		printf("Textos diferentes. \n");
	}
}
