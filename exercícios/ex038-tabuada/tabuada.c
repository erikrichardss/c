#include <stdio.h>
#include <stdlib.h>

// Faça um algoritmo que receba um valor inteiro e imprima na tela a sua tabuada.

struct table {
    int numberTable;
};

typedef struct table table;

void mathTable(struct table *t);
void counterFunction(struct table *counterOne);

int main() {

    table tableMath;
    int counter;

    mathTable(&tableMath);
    counterFunction(&tableMath);

    return 0;
}

void mathTable(struct table *t) {

    printf("Do you want to know the multiplication table of which number? \n");
    scanf("%d", &t->numberTable);

}

void counterFunction(struct table *counterOne) {

    int counterTree;

    for(int counterTwo = 1; counterTwo <= 10; counterTwo ++) {

        counterTree = counterOne->numberTable * counterTwo;

        printf("%d * %d = %d \n", counterOne->numberTable, counterTwo, counterTree);

    }

}