#include <stdio.h>

int main() {
	
	int v[5];
	float m;
	
	v[0] = 50;
	v[1] = 40;
	v[2] = 30;
	v[3] = 20;
	v[4] = 10;
	
	m = ((v[0] + v[1] + v[2] + v[3] + v[4])/ 5);
	
	printf("Resultado: %f\n", m);
	
	
	int v2[5] = {10, 20, 30, 40, 50};
	int i;
	float s = 0;
	
	for(i = 0; i < 5; i ++) {
		s += v2[i];
	}
	
	printf("Resultado: %f \n", s/5);
	
	
	int v3[5];
	int i2;
	
	for(i2 = 0; i2 < 5; i2 ++) {
		printf("Insira um dado: \n");
		scanf("%d", &v3[i2]);
	}
	
	printf("Dados inseridos: \n");
	
	for(i2 = 0; i2 < 5; i2++) {
		printf("%d ", v3[i2]);
	}
	
}
