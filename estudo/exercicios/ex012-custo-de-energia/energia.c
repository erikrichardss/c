#include <stdio.h>
#include <stdlib.h>

typedef struct {

    float custoEnergia, salarioMinimo, quilowattsConsumida, quilowatts, desconto, energiaDesconto;

} energia;

float valorQuilowatts(float salarioBase);
float valorResidencia(float salarioBase, float quilowatts);
float descontoEnergia(float valorQuilowatts, float desconto);

int main(int argc, char *argv[]) {

    energia energia;

    printf("Digite o valor do salario minimo. \n");
    scanf("%f", &energia.salarioMinimo);

    printf("Digite a quantidade de quilowatts gasta. \n");
    scanf("%f", &energia.quilowattsConsumida);

    energia.desconto = 0.15;

    energia.quilowatts = valorQuilowatts(energia.salarioMinimo);
    energia.custoEnergia = valorResidencia(energia.quilowattsConsumida, energia.quilowatts);
    energia.energiaDesconto = descontoEnergia(energia.custoEnergia, energia.desconto);

    printf("Valor do quilowatts: %.2f \n", energia.quilowatts);
    printf("Custo da energia: %.2f \n", energia.custoEnergia);
    printf("Custo da energia com 15 porcento de desconto: %.2f \n", energia.energiaDesconto);

    return 0;
}

float valorQuilowatts(float salarioBase) {

    return salarioBase / 1000;

}

float valorResidencia(float quilowattsConsumida, float quilowatts) {

    return quilowattsConsumida * quilowatts;

}

float descontoEnergia(float valorQuilowatts, float desconto) {

    return valorQuilowatts -= valorQuilowatts * desconto;

}