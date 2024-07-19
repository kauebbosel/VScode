#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_NOME 50
#define TAM_EMAIL 50

void AdicionarPessoa(void *pBuffer, void **pHead);
void RemoverPessoa(void *pBuffer, void **pHead);
void BuscarPessoa(void *pBuffer, void *pHead);
void ListarTodos(void *pHead);

int main(){
    void *pBuffer; //???
    void **pHead = malloc(sizeof(void *) );
    *pHead = NULL;

    if (pBuffer == NULL || pHead == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }

    do{
        printf("\n1 - Adicionar pessoa; 2 - Remover pessoa; 3 - Buscar pessoa; 4 - Listar todos; 5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", (int *)pBuffer);

        switch(*(int*) pBuffer){
            case 1:
                AdicionarPessoa(pBuffer, pHead);
                break;
            case 2:
                RemoverPessoa(pBuffer, pHead);
                break;
            case 3:
                BuscarPessoa(pBuffer, pHead);
                break;
            case 4:
                ListarTodos(pBuffer, pHead);
                break;
            case 5:
                printf("Saindo\n");
                break;
            default:
                printf("Opção inválida\n");
                break;
        }
    } while(*(int*)pBuffer != 5);

    free (pBuffer);
    return 0;
}

void AdicionarPessoa(void **pBuffer){
    int *idade = (int *) malloc(sizeof (int) * 1 );
    char *nome = (char *) malloc(sizeof(char) * TAM_EMAIL);
    char *email = (char *) malloc(sizeof(char) * TAM_EMAIL);

    printf("Digite idade, nome e email\n");
    scanf("%d", idade);
    getchar();
    fgets(nome, sizeof(nome), stdin);
    fgets(email, sizeof(email), stdin);

}