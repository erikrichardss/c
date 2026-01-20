#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	
	int sal, percen, almen;
	
	printf("Qual o valor do seu salario? \n");
	scanf("%d", &sal);
	
	percen = 15;
	
	almen = (sal * percen) / 100;
	sal = sal + almen;
	
	printf("O almento do seu salario foi de %d, totalizando %d ao total. \n", almen, sal);
	
	return 0;
}
