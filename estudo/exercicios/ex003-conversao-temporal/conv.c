#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int hora, min, seg;
	
	printf("Digite os segundos: ");
	scanf("%d", &seg);
	
	hora = seg / 3600;
	seg = seg - (3600*hora);
	
	min = seg - 60;
	seg = seg - (60 * min);
	
	printf("O tempo total de Jeremias é de %d:%d:%d", hora, min, seg);
	
	return 0;
}
