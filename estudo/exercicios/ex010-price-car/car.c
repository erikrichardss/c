#include <stdio.h>
#include <stdlib.h>

struct priceCar {

    float priceCarFactory, profitCar, taxesCar, finalPriceCar, percentageFactory, taxes;

};

float calcCarFactoryProfit(float distributor,float profitDistributor);
float calcTaxes(float priceFactory, float priceTaxes);
float calcFinalPrice(float priceFactory, float valueFactory, float valueTaxes);

int main() {

    struct priceCar priceCar;

    printf("Insert the price factory: \n");
    scanf("%f", &priceCar.priceCarFactory);

    printf("Insert the price factory from the distributor:\n ");
    scanf("%f", &priceCar.percentageFactory);

    printf("Insert the percentage from the taxes: \n");
    scanf("%f", &priceCar.taxesCar);

    priceCar.profitCar = calcCarFactoryProfit(priceCar.priceCarFactory, priceCar.percentageFactory);

    priceCar.taxes = calcTaxes(priceCar.priceCarFactory, priceCar.taxesCar);

    priceCar.finalPriceCar = calcFinalPrice(priceCar.priceCarFactory, priceCar.profitCar, priceCar.taxes);

    printf("The profit of the distributor: U$ %.2f \n", priceCar.profitCar);
    printf("Taxes: U$ %.2f \n", priceCar.taxes);
    printf("Final value: U$ %.2f an", priceCar.finalPriceCar);

    return 0;

}

float calcCarFactoryProfit(float distributor,float profitDistributor) {

    return distributor * profitDistributor / 100;

}

float calcTaxes(float priceFactory, float priceTaxes) {

    return priceFactory * priceTaxes / 100;

}

float calcFinalPrice(float priceFactory, float valueFactory, float valueTaxes) {

    return priceFactory + valueFactory + valueTaxes;

}