#include <stdio.h>

int main() {
	
	int num, res;
	int tab = 1;
	
	scanf("%d", &num);

	while(tab <= 10) {
		res = num * tab;
		tab++;
		printf("%d. ", res);
	}
	
}
