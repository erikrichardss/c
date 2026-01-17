#include <stdio.h>

int main() {
	
	int senha = 7564;
	int sen;
	
	while(sen != senha) {
		printf("Informe a senha \n");
		scanf("%d", &sen);
	}
	printf("Senha correta!");
	
}
