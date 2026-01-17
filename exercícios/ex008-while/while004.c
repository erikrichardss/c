#include <stdio.h> 

int main() {
	
	int num = 1;
	int numPar, numImpar;
	
	while(num <= 10) {
		printf("%d. ", num);
		
		if(num %2 == 0) {
			printf("par \n");	
		} else {
			printf("impar \n");
		}
	
		num ++;
	}

}
