#include <stdio.h>
#include <string.h>
#include <locale.h> // Para adicionar um novo idioma

#define N 20

int main() {
	setlocale(LC_ALL,"Portuguese"); //definindo um idioma
	
	char origem[N] = {"Olá, mundo!"};
	char destino[N];
	
	printf("Antes do strcpy: \n");
	puts(origem);
	puts(destino);
	
	/* como em linguagem C não se pode atribuir uma variável com =
	 utilizamos "strcpy */
	strcpy(destino, origem);
	
	printf("Depois do strcpy: \n");
	puts(origem);
	puts(destino);
	
}
