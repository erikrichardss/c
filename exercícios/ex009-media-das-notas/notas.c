#include <stdio.h>

// Leia 3 notas:

// Calcule a média

// Informe se o aluno está aprovado (=7) ou reprovado

int main() {
	
	float notaA, notaB, notaC, media, quantNota;
	
	printf("Informe a primeira nota: \n");
	scanf("%f", &notaA);
	
	printf("Informe a segunda nota: \n");
	scanf("%f", &notaB);
	
	printf("Informe a terceira nota: \n");
	scanf("%f", &notaC);
	
	printf("Informe a quantidade de materias: \n");
	scanf("%f", &quantNota);
	
	media = (notaA + notaB + notaC) / quantNota;
	
	printf("%.2f. ", media);
	
	if(media >= 7) {
		printf("Aluno aprovado!");
	} else {
		printf("Aluno reprovado!");
	}
	
	
	
}
