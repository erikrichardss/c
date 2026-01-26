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

int main() {
    setlocale(LC_ALL, "Portuguese");

    funcionario func;
    lerFuncio (&func);
    
    func.salFin = calcBonus(func.salario);

    printf("\n Nome: %s", func.nome);
    printf("\n Salário: %.2f", func.salario);

}

void lerFuncio(struct funcionario *f) {

    printf("Nome: \n");
    fgets(f->nome, sizeof(f->nome), stdin);
    getchar();

    printf("Salário: \n");
    scanf("%f", &f->salario);

}

float calcBonus(float salario) {
    if(salario >= 3000) {
        return salario * 1.10;
    } else if(salario < 3000) {
        return salario * 1.05;
    }
}