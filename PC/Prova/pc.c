// Nome: Amy Kuhn Hammes | Turma: M1

#include <stdio.h>
#include <stdlib.h>

//estrutura da celula
struct cel{
    int num;
    struct cel *next;
};

//cria nova celula
struct cel * criar() {
    struct cel * head;
    //aloca memoria para cabeça e seta o ponteiro dela para null
    head = (struct cel *)malloc(sizeof(struct cel));
    head->next = NULL;
    return head;
}

void insere(struct cel *head, int num) {
    struct cel *last = head, *pivot = head, *new;
    // cria uma nova celula e aloca ela na memoria
    new = (struct cel *)malloc(sizeof(struct cel));
    // atribui o valor a ela
    new->num = num; 
    while(1) {
    
        // existem 3 casos
        //caso 1, o atual é maior que oque deve ser inserido, então deve ser inserido anteriormente a o atual
        //caso 2, chegou no final da lista, deve ser inserido no final da lista
        //caso 3, nenhum dos casos a cima, logo, vai pro proximo da lista

        // o check de ver se o pivot não é cabeça existe pois não é armazenado valores na cabela, então poderia gerar comparação com valores indesejados
        if(pivot != head && pivot->num > num) {
            //caso 1
            //o ultimo vai apontar para o novo e o novo vai apontar para o pivot(atual)
            last->next = new;
            new->next = pivot;
            // break porque já inseriu oque deveria ser inserido
            break;
        } else if(pivot->next == NULL){
            //caso 2
            //o pivot vai apontar para o novo, e o novo vai apontar para nada, já que ele é o ultimo
            pivot->next = new;
            new->next = NULL;
            // break porque já inseriu oque deveria ser inserido
            break;
        }
        //caso 3
        // move o pivot para frente e seta o atual pivot como last
        // essa parada do last é gambiarra, deveria ser feito olhando para frente e não para tras, mas funciona igual kdasokdasokdask
        last = pivot;
        pivot = pivot->next;
    }
}

// salva lista no arquivo
void save(struct cel *head, FILE *saida) {
    //pivot = posição atual
    struct cel *pivot = head;
    //em quanto tiver proximo depois do atual
    while(pivot->next != NULL) {
        // nove pro proximo o pivot
        pivot = pivot->next;
        // salva no arquivo
        fprintf(saida, "%d\n", pivot->num);
    }
}

//libera a memoria alocada dinamicamente para não dar leak
void freeMallocs(struct cel *head) {
    //basicamente começa na cabeça, libera a atual, e coloca o novo pivot no next até não ter next
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

    //le int por int no arquivo e chama o inserir

    FILE *entrada = fopen("entrada.txt", "r");

    while(!feof(entrada)) {
        fscanf(entrada, "%d", &aux);
        insere(lista, aux);
    }

    fclose(entrada);

    //cria o arquivo de saida e chama o save para salvar os valores da lista

    FILE *saida = fopen("saida.txt", "w");

    save(lista, saida);

    fclose(saida);

    //libera memoria
    freeMallocs(lista);

    return 0;
}   