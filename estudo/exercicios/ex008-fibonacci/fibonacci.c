#include <stdio.h>
#include <stdlib.h>

struct fibonacci {
    int cont, nacci, naccisoma, nacciatual;
};

typedef struct fibonacci fibonacci;

int main(int agrs) {

    fibonacci fib;

    fib.naccisoma = 1;
    fib.nacci = 0;

    printf("Serie de Fibonnaci: \n");
    printf("%d ", fib.nacci);
    printf("%d ", fib.naccisoma);

    for(fib.cont = 0; fib.cont < 6; fib.cont++) {

        fib.nacciatual = fib.nacci + fib.naccisoma;
        fib.nacci = fib.naccisoma;
        fib.naccisoma = fib.nacciatual;

        printf("%d ", fib.nacciatual);

    }

    return 0;
}