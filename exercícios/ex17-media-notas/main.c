#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "pt-br utf-8");
	
	int mat = 3;
	float nota[3];
	float res = 0;
	int cont, cont2;
	
	for(cont = 0; cont < 3; cont ++) {
		printf("Informe sua nota: \n");
		scanf("%f", &nota[cont]);
		res = res + nota[cont];
	}
	
	res = res / mat;
	
	printf("A média de sua nota foi %.2f", res);
	
	return 0;
}
