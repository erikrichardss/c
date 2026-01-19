#include <stdio.h>

// Defina um número fixo

// O usuário tenta adivinhar

// Informe se o palpite é maior, menor ou correto

int main() {
	
	int number = 71;
	int numAdiv;
	
	printf("Tente adivinhar o numero. \n");
	
	do{
		scanf("%d", &numAdiv);
		
		if(number == numAdiv) {
			
			printf("Acertou, parabens! \n");
			
		}else if(numAdiv < number) {
			
			printf("O numero informado e menor que o definido. \n");
			
		} else if(numAdiv > number) {
			
			printf("O numero informado e maior que o definido. \n");
			
		}
	}while(numAdiv != number);
	
}
