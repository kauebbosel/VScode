#include <stdio.h>
#include <stdlib.h>

struct cel {
    int conteudox, conteudoy;
    struct cel* prox;
};

typedef struct cel celula;

int main() {
    FILE *arquivo = fopen("entrada.txt", "r");
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    celula *q1 = NULL, *q2 = NULL, *q3 = NULL, *q4 = NULL;
    celula *iniQ1 = NULL, *iniQ2 = NULL, *iniQ3 = NULL, *iniQ4 = NULL;

    int x, y;

    while (fscanf(arquivo, "%d %d", &x, &y) == 2) {
        celula *nova = (celula *)malloc(sizeof(celula));
        nova->conteudox = x;
        nova->conteudoy = y;
        nova->prox = NULL;

        if (x >= 0 && y >= 0) {
            if (q1 == NULL) {
                q1 = nova;
                iniQ1 = nova;
            } else {
                q1->prox = nova;
                q1 = q1->prox;
            }
        } else if (x < 0 && y >= 0) {
            if (q2 == NULL) {
                q2 = nova;
                iniQ2 = nova;
            } else {
                q2->prox = nova;
                q2 = q2->prox;
            }
        } else if (x < 0 && y < 0) {
            if (q3 == NULL) {
                q3 = nova;
                iniQ3 = nova;
            } else {
                q3->prox = nova;
                q3 = q3->prox;
            }
        } else if (x >= 0 && y < 0) {
            if (q4 == NULL) {
                q4 = nova;
                iniQ4 = nova;
            } else {
                q4->prox = nova;
                q4 = q4->prox;
            }
        }
    }

    fclose(arquivo);

    printf("Pontos no quadrante Q1:\n");
    while (iniQ1 != NULL) {
        printf("(%d, %d)\n", iniQ1->conteudox, iniQ1->conteudoy);
        celula *temp = iniQ1;
        iniQ1 = iniQ1->prox;
        free(temp);
    }

    printf("Pontos no quadrante Q2:\n");
    while (iniQ2 != NULL) {
        printf("(%d, %d)\n", iniQ2->conteudox, iniQ2->conteudoy);
        celula *temp = iniQ2;
        iniQ2 = iniQ2->prox;
        free(temp);
    }

    printf("Pontos no quadrante Q3:\n");
    while (iniQ3 != NULL) {
        printf("(%d, %d)\n", iniQ3->conteudox, iniQ3->conteudoy);
        celula *temp = iniQ3;
        iniQ3 = iniQ3->prox;
        free(temp);
    }

    printf("Pontos no quadrante Q4:\n");
    while (iniQ4 != NULL) {
        printf("(%d, %d)\n", iniQ4->conteudox, iniQ4->conteudoy);
        celula *temp = iniQ4;
        iniQ4 = iniQ4->prox;
        free(temp);
    }

    return 0;
}
