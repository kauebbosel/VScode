#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void **pBuffer;

void adicionarPessoa();
void removerPessoa();
void buscarPessoa();
void listarTodos();
void reallocator();

int main(){
    //0 - manipulaçao de dados, 1 - qntd pessoas ou len, 2 - size de memoria do pBuffer, 
    //3 - tail ou ultima pessoa, 4 - i ou var para while's , 5 - aux, 6 - temp
    // pBuffer[6] - operações; pBuffer[7] ou maior são os dados de pessoas
    pBuffer = (void**)malloc(sizeof(void*) * 37);
    pBuffer[1] = 0;
    pBuffer[2] = 37;
    pBuffer[3] = 7;

    do {
        printf("1 - Adicionar; 2 - Remover; 3 - Buscar; 4 - Listar; 5 - Sair\n");
        scanf("%d", &pBuffer[0]);
        switch ((int) pBuffer[0])
        {
            case 1:
                adicionarPessoa();
                break;
            case 2:
                removerPessoa();
                break;
            case 3:
                buscarPessoa();
                break;
            case 4:
                listarTodos();
                break;
            case 5:
                printf("Saindo\n");
        }

    } while( (int)pBuffer[0] != 5);
    free (pBuffer);
    return 1;
}


void reallocator(){             //caso a memória seja insuficiente, adiciona espaço para 5 pessoas
    pBuffer[2] += 15;
    pBuffer = realloc(pBuffer, sizeof(void*) * (int) pBuffer[2]);
}


void adicionarPessoa(){

    pBuffer[6] = (int)pBuffer[3] +3;            //checando se memoria cheia
    if(pBuffer[6] >= pBuffer[2] ){
        reallocator();
    }
    pBuffer[4] = 7; 
    printf("Digite nome: ");
    scanf("\n%[^\n]s", &pBuffer[6]);     //botando nome no temp (6) para verificar ordem alfabética

    while(1){                           //compara o nome atual com o próximo, caso o atual seja menor que o prox, põe no atual e move toda a pilha pra frente 
        if(pBuffer[4] >= pBuffer[3] || strcmp( &pBuffer[ (int)pBuffer[4] ], &pBuffer[6] ) > 0) {
            memcpy(&pBuffer[ ((int)pBuffer[4]) + 3 ], &pBuffer[((int)pBuffer[4])],sizeof(void *)*(int)pBuffer[3]-(6+(int)pBuffer[4]+3));
            pBuffer[ (int)pBuffer[4] ] = pBuffer[6];
            break;
        }
        pBuffer[4] += 3;
    }

    printf("Idade: ");
    scanf("%d", &pBuffer[(int)pBuffer[4]+1]);       //põe no index 7+1
    printf("Email: ");
    scanf("%s", &pBuffer[(int)pBuffer[4]+2]);

    pBuffer[3] += 3;        //index da última coisa alocada no array ou tail (3)
    pBuffer[1] += 1;        //qntd de pessoas ou size (1)
}

void removerPessoa(){

}


void buscarPessoa(){                //refazendo, necessita revisão
    if ( pBuffer[1] == 0 ){
        printf("Lista vazia\n");
        return 0;
    }
    printf("Busca por index: ");
    scanf("%d", &pBuffer[6]);
    pBuffer[4] = 0;

    while ( pBuffer[4] <= pBuffer[6] ){     //busca o index, qnd i for igual ao temp, printa a pessoa procurada
        if( pBuffer[4] == pBuffer[6] ){
            printf("Nome: %s\n", &pBuffer[7 + (int)pBuffer[4] * 3] );
            printf("Idade:%d\n", &pBuffer[7 + (int)pBuffer[4] * 3 + 1 ] );
            printf("Email:%s\n", &pBuffer[7 + (int)pBuffer[4] * 3 + 2 ] );
        }
        pBuffer[4]++;
    }
}
void listarTodos(){         //terminado
    pBuffer[6] = 0;
    while( pBuffer[6] < pBuffer[1] ){       //enquanto o temp for menor que a qntd de pessoas, printa todas as pessoas
        printf("Nome:%s\n", &pBuffer[7 + (int)pBuffer[6] * 3 ] );
        printf("Idade:%d\n", pBuffer[7 + (int)pBuffer[6] * 3 + 1 ] );
        printf("Email:%s\n\n", &pBuffer[7 + (int)pBuffer[6] * 3 + 2 ] );

        pBuffer[6]++;
    }
}