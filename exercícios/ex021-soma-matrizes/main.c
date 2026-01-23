#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3];
	int a, b, soma, media;
	
	printf("Informe números aleatórios (inteiros). \n");
	
	soma = 0;
	
	for(a = 0; a < 3; a++) {
		
		for(b = 0; b < 3; b++) {
			printf("Informe um número: \n");
			scanf("%d", &mat[a][b]);
			
			soma = soma + mat[a][b];
		}
	}
	  
	media = soma / 9;
	  
	printf("Soma: %d \n", soma);
	printf("Média: %d \n", media);
	
	system("pause");
	
	return 0;
}
