#include <stdio.h>
#include <stdlib.h>

/*  Faça um algoritmo que leia o ano em que uma pessoa nasceu, 
imprima na tela quantos anos, meses e dias essa pessoa ja viveu. 
Leve em consideração o ano com 365 dias e o mês com 30 dias.
(Ex: 5 anos, 2 meses e 15 dias de vida) */

struct pessoa {
    int anoNasc, mesNasc, diaNasc;
    int anos, meses, dias;
    int anoAtual, mesAtual, diaMes;
};

typedef struct pessoa pessoa;

void dadosNasc(struct pessoa *p);
void dadosIda(struct pessoa *p);
void lerDados(struct pessoa p);

int main() {

    pessoa pessoa;

    dadosNasc(&pessoa);
    dadosIda(&pessoa);
    lerDados(pessoa);

    return 0;
}

void dadosNasc(struct pessoa *p) {
    printf("Ano de nascimento: \n");
    scanf("%d", &p->anoNasc);

    printf("Mês do nascimento: \n");
    scanf("%d", &p->mesNasc);

    printf("Dia do nascimento: \n");
    scanf("%d", &p->diaNasc);
}

void dadosIda(struct pessoa *p) {
    p->anoAtual = 2025;
    p->mesAtual = 1;
    p->diaMes = 30;

    p->anos = p->anoAtual - p->anoNasc;
    p->meses = p->mesNasc - p->mesAtual;
    p->dias = p->diaMes - p->diaNasc;
}

void lerDados(struct pessoa p) {
    printf(" \n %d Anos \n", p.anos);
    printf("%d Meses \n", p.meses);
    printf("%d Dias \n", p.dias);
}