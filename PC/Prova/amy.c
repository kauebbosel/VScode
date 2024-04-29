// Nome: Amy Kuhn Hammes | Turma: M1

#include <stdio.h>
#include <stdlib.h>

struct cel{
    int num;
    struct cel *next;
};

struct cel * criar() {
    struct cel * head;
    head = (struct cel *)malloc(sizeof(struct cel));
    head->next = NULL;
    return head;
}

void insere(struct cel *head, int num) {
    struct cel *last = head, *pivot = head, *new;
    new = (struct cel *)malloc(sizeof(struct cel));
    
    new->num = num;
    while(1) {
    
        // o check de ver se o pivot não é cabeça existe pois não é armazenado valores na cabela, então poderia gerar comparação com valores indesejados
        if(pivot != head && pivot->num > num) {
            last->next = new;
            new->next = pivot;
            break;
        } else if(pivot->next == NULL){ 
            pivot->next = new;
            new->next = NULL;
            break;
        }
        last = pivot;
        pivot = pivot->next;
    }
}

void save(struct cel *head, FILE *saida) {
    struct cel *pivot = head;
    while(pivot->next != NULL) {
        pivot = pivot->next;
        fprintf(saida, "%d\n", pivot->num);
    }
}

void freeMallocs(struct cel *head) {
    struct cel *aux, *pivot = head;
    while(pivot != NULL) {
        aux = pivot->next;
        free(pivot);
        pivot = aux;
    }
}

int main() {
    struct cel *lista = criar();
    int aux;

    FILE *entrada = fopen("entrada.txt", "r");

    while(!feof(entrada)) {
        fscanf(entrada, "%d", &aux);
        insere(lista, aux);
    }

    fclose(entrada);

    FILE *saida = fopen("saida.txt", "w");

    save(lista, saida);

    fclose(saida);

    freeMallocs(lista);

    return 0;
}   