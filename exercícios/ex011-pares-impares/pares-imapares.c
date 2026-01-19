#include <stdio.h>

int main() {
	
	int num;
	
	for(num = 0; num <= 10; num ++) {
		
		printf("%d ", num);
		
		if(num %2 == 0){
			
			printf("Par. \n");
			
		}else {
			
			printf("Impar. \n");
			
		}
		
	}
	
}
