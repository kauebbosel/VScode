#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Definindo o tamanho dos dados a serem armazenados
#define TAM_NOME 50
#define TAM_EMAIL 50

void adicionarPessoa(void *pBuffer, void **pHead);
void removerPessoa(void *pBuffer, void **pHead);
void buscarPessoa(void *pBuffer, void *pHead);
void listarPessoas(void *pHead);

int main() {
    void *pBuffer = malloc(3 * sizeof(int) + 2 * TAM_NOME * sizeof(char) + sizeof(char) * TAM_EMAIL); // Espaço para opção, idade, 2 nomes e 1 email
    void **pHead = malloc(sizeof(void *)); // Cabeça da lista duplamente ligada
    *pHead = NULL;

    if (pBuffer == NULL || pHead == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    do {
        printf("\n1- Adicionar Pessoa\n2- Remover Pessoa\n3- Buscar Pessoa\n4- Listar todos\n5- Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", (int *)pBuffer);

        switch (*(int *)pBuffer) {
            case 1:
                adicionarPessoa(pBuffer, pHead);
                break;
            case 2:
                removerPessoa(pBuffer, pHead);
                break;
            case 3:
                buscarPessoa(pBuffer, *pHead);
                break;
            case 4:
                listarPessoas(*pHead);
                break;
            case 5:
                printf("Saindo...\n");
                break;
            default:
                printf("Opcao invalida!\n");
                break;
        }
    } while (*(int *)pBuffer != 5);

    free(pBuffer);
    return 0;
}

void adicionarPessoa(void *pBuffer, void **pHead) {
    void *pNodo = malloc(2 * sizeof(void *) + TAM_NOME * sizeof(char) + sizeof(int) + TAM_EMAIL * sizeof(char));
    void *pAtual = *pHead;
    void *pAnterior = NULL;

    if (pNodo == NULL) {
        printf("Erro ao alocar memória!\n");
        return;
    }

    printf("Digite o nome: ");
    scanf("%s", (char *)(pBuffer + sizeof(int)));
    printf("Digite a idade: ");
    scanf("%d", (int *)(pBuffer + sizeof(int) + TAM_NOME * sizeof(char)));
    printf("Digite o email: ");
    scanf("%s", (char *)(pBuffer + sizeof(int) + TAM_NOME * sizeof(char) + sizeof(int)));

    memcpy(pNodo + 2 * sizeof(void *), pBuffer + sizeof(int), TAM_NOME * sizeof(char));
    memcpy(pNodo + 2 * sizeof(void *) + TAM_NOME * sizeof(char), pBuffer + sizeof(int) + TAM_NOME * sizeof(char), sizeof(int));
    memcpy(pNodo + 2 * sizeof(void *) + TAM_NOME * sizeof(char) + sizeof(int), pBuffer + sizeof(int) + TAM_NOME * sizeof(char) + sizeof(int), TAM_EMAIL * sizeof(char));
    *((void **)pNodo) = NULL; // proximo
    *((void **)(pNodo + sizeof(void *))) = NULL; // anterior

    if (*pHead == NULL) {
        *pHead = pNodo;
    } else {
        while (pAtual != NULL && strcmp((char *)(pNodo + 2 * sizeof(void *)), (char *)(pAtual + 2 * sizeof(void *))) > 0) {
            pAnterior = pAtual;
            pAtual = *((void **)pAtual);
        }

        if (pAnterior == NULL) {
            *((void **)pNodo) = *pHead;
            *((void **)(*pHead + sizeof(void *))) = pNodo;
            *pHead = pNodo;
        } else {
            *((void **)pNodo) = pAtual;
            *((void **)(pNodo + sizeof(void *))) = pAnterior;
            *((void **)pAnterior) = pNodo;
            if (pAtual != NULL) {
                *((void **)(pAtual + sizeof(void *))) = pNodo;
            }
        }
    }
}

void removerPessoa(void *pBuffer, void **pHead) {
    void *pAtual = *pHead;
    void *pAnterior = NULL;

    printf("Digite o nome: ");
    scanf("%s", (char *)(pBuffer + sizeof(int)));

    while (pAtual != NULL && strcmp((char *)(pBuffer + sizeof(int)), (char *)(pAtual + 2 * sizeof(void *))) != 0) {
        pAnterior = pAtual;
        pAtual = *((void **)pAtual);
    }

    if (pAtual == NULL) {
        printf("Pessoa nao encontrada!\n");
        return;
    }

    if (pAnterior == NULL) {
        *pHead = *((void **)pAtual);
        if (*pHead != NULL) {
            *((void **)(*pHead + sizeof(void *))) = NULL;
        }
    } else {
        *((void **)pAnterior) = *((void **)pAtual);
        if (*((void **)pAtual) != NULL) {
            *((void **)(*((void **)pAtual) + sizeof(void *))) = pAnterior;
        }
    }

    free(pAtual);
}

void buscarPessoa(void *pBuffer, void *pHead) {
    void *pAtual = pHead;

    printf("Digite o nome: ");
    scanf("%s", (char *)(pBuffer + sizeof(int)));

    while (pAtual != NULL && strcmp((char *)(pBuffer + sizeof(int)), (char *)(pAtual + 2 * sizeof(void *))) != 0) {
        pAtual = *((void **)pAtual);
    }

    if (pAtual == NULL) {
        printf("Pessoa nao encontrada!\n");
        return;
    }

    printf("Nome: %s\n", (char *)(pAtual + 2 * sizeof(void *)));
    printf("Idade: %d\n", *(int *)(pAtual + 2 * sizeof(void *) + TAM_NOME * sizeof(char)));
    printf("Email: %s\n", (char *)(pAtual + 2 * sizeof(void *) + TAM_NOME * sizeof(char) + sizeof(int)));
}

void listarPessoas(void *pHead) {
    void *pAtual = pHead;

    while (pAtual != NULL) {
        printf("Nome: %s, Idade: %d, Email: %s\n",
               (char *)(pAtual + 2 * sizeof(void *)),
               *(int *)(pAtual + 2 * sizeof(void *) + TAM_NOME * sizeof(char)),
               (char *)(pAtual + 2 * sizeof(void *) + TAM_NOME * sizeof(char) + sizeof(int)));
        pAtual = *((void **)pAtual);
    }
}