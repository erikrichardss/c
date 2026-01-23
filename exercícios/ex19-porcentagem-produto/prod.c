#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	
	float prod, desc, option1, option2, option4;
	int opt;
	
	prod = 299.99;
	
	printf("Preço do produto: %.2f. \n", prod);
	printf("Informe o metódo de pagamento: \n");
	printf("1 - À Vista em Dinheiro ou Pix, recebe 15% de desconto. \n");
	printf("2 - À Vista no cartão de crédito, recebe 10% de desconto. \n");
	printf("3 - Parcelado no cartão em duas vezes, preço normal do produto sem juros. \n");
	printf("4 - Parcelado no cartão em três vezes ou mais, preço normal do produto mais juros de 10%. \n");
	scanf("%d", &opt);
	
	switch(opt) {
		case 1: 
			desc = (prod * 15) / 100;
			option1 = prod - desc;
			
			printf("Total do desconto: %.2f \n", desc);
			printf("Preço final: %.2f \n", option1);
			break;
			
		case 2:
			desc = (prod * 10) / 100;
			option2 = prod - desc;
			
			printf("Total do desconto: %.2f \n", desc);
			printf("Preço final: %.2f \n", option2);
			break;
			
		case 3:
			printf("Preço normal: %.2f \n", prod);
			break;
		
		case 4:
			desc = (prod * 10) / 100;
			option4 = prod + desc;
			
			printf("Total do acrescimo: %.2f \n", desc);
			printf("Preço final: %.2f \n", option4);
			
		default:
			printf("Opção inválida!");
			break;
	}
	
	return 0;
}
