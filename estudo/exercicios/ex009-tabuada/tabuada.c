#include <stdio.h>
#include <stdlib.h>

struct tabuada {
    int cont1, cont2, tabu;
};

typedef struct tabuada tabuada;

int main(int args) {

    tabuada tab;

    printf("Tabuada de 1 a 10. \n");

    for(tab.cont1 = 1; tab.cont1 <= 10; tab.cont1++) {

        for(tab.cont2 = 1; tab.cont2 <= 10; tab.cont2++) {

            tab.tabu = tab.cont1 * tab.cont2;

            printf("%d X %d = %d \n", tab.cont1, tab.cont2, tab.tabu);

        }

        printf("\n");

    }

    return 0;
}