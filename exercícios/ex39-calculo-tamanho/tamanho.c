#include <stdio.h>
#include <stdlib.h>

// Francisco is 1.50 m tall and grows 2 centimeters per year, while Sara is 1.10 m tall and grows 3 centimeters per year. Create an algorithm that calculates and prints on the screen how many years it will take for Francisco to be bigger than Sara.

struct height {

    float heightMan, heightWomen, tempHeightMan, tempHeightWomen;
    float growthMan, growWomen;

};

typedef struct height height;

void defineHeight(struct height *h);
void calcHeight(struct height *calcHeightFunction);
void showHeight(struct height *showHeightFunction);

int main() {

    height height;

    defineHeight(&height);
    calcHeight(&height);
    showHeight(&height);

}

void defineHeight(struct height *defineHeightFunction) {

    defineHeightFunction->heightMan = 1.50;
    defineHeightFunction->heightWomen = 1.10;

    defineHeightFunction->growthMan = 0.02;
    defineHeightFunction->growWomen = 0.03;

}

void calcHeight(struct height *calcHeightFunction) {

    calcHeightFunction->tempHeightMan = calcHeightFunction->heightMan;
    calcHeightFunction->tempHeightWomen = calcHeightFunction->heightWomen;

    while(calcHeightFunction->heightMan > calcHeightFunction->heightWomen) {

        calcHeightFunction->heightMan = calcHeightFunction->heightMan + calcHeightFunction->growthMan;
        calcHeightFunction->heightWomen = calcHeightFunction->heightWomen + calcHeightFunction->growWomen;

    }

    calcHeightFunction->tempHeightMan = (calcHeightFunction->heightMan - calcHeightFunction->tempHeightMan) / calcHeightFunction->growthMan;
    calcHeightFunction->tempHeightWomen = (calcHeightFunction->heightWomen - calcHeightFunction->tempHeightWomen) / calcHeightFunction->growWomen;

}

void showHeight(struct height *showHeightFunction) {

    printf("\n Height of the men: %.2f \n", showHeightFunction->heightMan);
    printf("\n Height of the women: %.2f \n", showHeightFunction->heightWomen);

    printf("\n In %.2f years, Sara would stay taller than Francisco. \n", showHeightFunction->tempHeightWomen);

}