#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 
Declare uma matriz 4x4 de números inteiros
Leia todos os valores da matriz usando laços de repetição
Encontre e mostre:
O maior valor da matriz
A posição desse valor (linha e coluna)
 */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	int mat[4][4] = {{1, 5, 7, 11},
					{9, 2, 4, 15},
					{12, 8, 13, 16},
					{3, 6, 10, 14}};
					
	int maior, colMai, linMai, l, c;
	
	maior = mat[0][0];
	colMai = 0;
	linMai = 0;
	
	printf("Imprimindo o valor de todas as posições: \n");
	
	for(l = 0; l < 4; l++) {
		
		for(c = 0; c < 4; c++) {
			printf("%d ", mat[l][c]);
			
			if(mat[l][c] > maior) {
				maior = mat[l][c];
				colMai = c;
				linMai = l;
			}
		}
	}
	printf("\n\n");
	
	printf("O maior da matriz: %d \n", maior);
	printf("Posição da coluna: %d \n", colMai);
	printf("Posição da linha: %d \n", linMai);
	
	return 0;
}
