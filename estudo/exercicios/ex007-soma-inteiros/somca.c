#include <stdio.h>
#include <stdlib.h>

struct inteiro {
    int i, soma;
};

typedef struct inteiro inteiro;

int main(int args) {

    inteiro in;

    in.soma = 0;

    for(in.i = 0; in.i <= 10; in.i++) {

        printf("%d ", in.i);

        in.soma = in.soma + in.i;

    }

    printf("\n");
    printf("Soma dos números: %d \n", in.soma);

    system("cls");
    
    return 0;
}