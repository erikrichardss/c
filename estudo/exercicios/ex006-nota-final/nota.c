#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

struct nota {
    float plaboratorio, pavaliacao, pfinal, peso;
    float laboratorio, avaliacao, final, calc;
    float media;
};

typedef struct nota nota;

void peso(struct nota *n);
void fnota(struct nota *n);
void nmedia(struct nota *n);
char calcNota(char n);
void mostraNota(struct nota n);

int main() {
    setlocale(LC_ALL, "");

    nota nota;
    
    peso(&nota);
    fnota(&nota);
    nmedia(&nota);
    mostraNota(nota);

    return 0;
}


void peso(struct nota *n) {

    n->plaboratorio = 2;
    n->pavaliacao = 3;
    n->pfinal = 5;

}


void fnota(struct nota *n) {

    printf("Digite as notas abaixo: \n");

    printf("Trabalho de laboratorio: \n");
    scanf("%f", &n->laboratorio);

    printf("Avaliacao semestral: \n");
    scanf("%f", &n->avaliacao);

    printf("Exame final: \n");
    scanf("%f", &n->final);
    
}


void nmedia(struct nota *n) {

    n->calc = n->laboratorio + n->avaliacao + n->final;
    n->peso = n->plaboratorio + n->pavaliacao + n->pfinal;

    n->media = n->calc / n->peso;

}


char calcNota(char n) {

    if (n >= 0 && n <=10) {
        if(n >= 8) {
            return "A";
        } else {
            if(n >= 7) {
                return "B";
            } else {
                if(n >= 6) {
                    return "C";
                } else {
                    if(n >= 5) {
                        return "D";
                    } else {
                        return "E";
                    }
                }
            }
        }
    }

}


void mostraNota(struct nota n) {

    printf("Media: %.2f \n", n.media);
    printf("Conceito: %c \n", calcNota(n.media));

}