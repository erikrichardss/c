#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define tam 50

struct funcionario {

    char nome[tam];
    float salario;
    float bonus;
    float salFin;
    
};

typedef struct funcionario funcionario;

void lerFuncio(struct funcionario *f);
float calcBonus(float salario);
void calcFinalSal(struct funcionario *f);
void mostrarFunc(struct funcionario f);

int main() {
    setlocale(LC_ALL, "Portuguese");

    struct funcionario funcionario[3];

    int i;
    
    for(i = 0; i < 3; i++) {
        printf("\n Funcionário %d \n", i + 1);
        lerFuncio(&funcionario[i]);
        calcFinalSal(&funcionario[i]);
    }

    for(i = 0; i < 3; i++) {
        mostrarFunc(funcionario[i]);
    }

    return 0;
}

void lerFuncio(struct funcionario *f) {

    printf("Nome: \n");
    fgets(f->nome, sizeof(f->nome), stdin);
    f->nome[strcspn(f->nome, "\n")] = '\0';

    printf("Salário: \n");
    scanf("%f", &f->salario);
    getchar();

}

float calcBonus(float sal) {

    if(sal >= 3000) {
        return (sal * 10) / 100;
    } else if(sal < 3000) {
        return (sal * 5) / 100;
    }

}

void calcFinalSal(struct funcionario *f) {

    f->bonus = calcBonus(f->salario);
    f->salFin = f->salario + f->bonus;

}

void mostrarFunc(struct funcionario f) {

    printf("\n Nome: %s", f.nome);
    printf("\n Salário: %.2f", f.salario);
    printf("\n Bônus: %.2f", f.bonus);
    printf("\n Salário Final: %.2f \n", f.salFin);

}