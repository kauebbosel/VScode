#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define Linha 4
#define Coluna 6

//define Metade como nº de colunas dividido por 2
#define Metade Coluna/2
#define MetadeLinha Linha/2

void posiciona(int campo[Linha][Coluna]);

void revela(int campo[Linha][Coluna], int lado);

void jogar(int campo[Linha][Coluna]);

int main ()
{
    int campo[Linha][Coluna]={0};
    int lado,JogarNovamente;

    // muda os valores aleatórios a cada execução
    srand(time(NULL));
    
    do 
    {
        posiciona(campo);                   //monta o tabuleiro

        printf("Escolha o tipo de visualização do tabuleiro. 1.teu campo, 2. campo inimigo, 3. tudo\n");
        scanf("%d",&lado);

        revela(campo, lado);

        jogar(campo);

        printf("Deseja jogar novamente? 0.nao 1.sim\n");
        scanf("%d",&JogarNovamente);

        for(int i=0;i<Linha;i++)
        {
            for(int j=0;j<Coluna;j++)                       //resetando o campo para não ter vestigios da partida anterior
            {
                campo[i][j] = 0;
            }
        }

    }   while(JogarNovamente==1);
}

void posiciona(int campo[Linha][Coluna])
{
    int barco,barco2,randomizer,randomizer2,metadePorcentagem;
    

    printf("Digite as coordenadas de seus barcos\n");
    for(int j=0;j < Metade;j++)
        {
            scanf("%d%d",&barco,&barco2);       //põe os barcos do jogador no tabuleiro
        campo[barco][barco2] = 1;
    }

    for(int j=0;j < Metade;j++)                 //põe os barcos da CPU no tabuleiro
    { 
        randomizer =  (rand() % Linha);
        randomizer2 = Metade + (rand() % Metade);

                                                //caso a CPU escolha o mesmo quadrado duas vezes
        if(campo[randomizer][randomizer2] == 1)
        {
        randomizer =  (rand() % Linha);
        randomizer2 = Metade + (rand() % Metade);
        }                                        
        campo[randomizer][randomizer2] = 1;
    }
}

void revela(int campo[Linha][Coluna], int lado)
{
    if(lado == 1)          //mostra o teu lado do tabuleiro
    {
        printf("campo aliado\n");
        for( int i=0; i < Linha;i++)
        {
            for(int j=0;j < Metade; j++)
            {
                printf("%d ", campo[i][j]);
            }   
            printf("\n");
        }
    }

    if(lado == 2)             //revela só o inimigo
    {
        printf("campo inimigo\n");
        for(int i=0; i < Linha;i++)
        {
            for(int j=Metade;j < Coluna; j++)
            {
                printf("%d ", campo[i][j]);
            }   
            printf("\n");
        }
    }   

    if(lado == 3)           //mostra o tabuleiro inteiro
    {
        printf("campo inteiro\n");
        for(int i=0;i<Linha;i++)
        {
            for(int j=0;j<Coluna;j++)
            {
                printf("%d ",campo[i][j]);
            }
            printf("\n");
        }
    }
}

void jogar(int campo[Linha][Coluna])
{
    int jogadaCPU,jogadaCPU2,jogada,jogada2,lado,Somador,terminaJogo=1,Linha_Multiplica_Metadecoluna;
    int campo2[Linha][Coluna];

    Linha_Multiplica_Metadecoluna = MetadeLinha*Metade;
    
    for(int i=0;i<Linha;i++)            //copia campo para campo2, afim de mostrar apenas os barcos aliados na função depois
    {
        for(int j=0;j<Coluna;j++)
        {
            campo2[i][j] = campo[i][j];
            if(i>=MetadeLinha || j>=Metade)
            {
                campo2[i][j] = 0;
            }
        }
    }
    
    do 
    {
        printf("Faça tua jogada\n");
        scanf("%d%d",&jogada,&jogada2);
            if(campo[jogada][jogada2]== 1)
            {
                printf("Tu acertou em %d,%d!\n",jogada,jogada2);
            }
            campo2[jogada][jogada2] = 2;            //transforma o tabuleiro para mostrar os espaços que tu já atirou
            campo[jogada][jogada2] = 2;

            jogadaCPU = rand() % Linha;
            jogadaCPU2 = rand() % Metade;                   //randomiza a jogada do computador

            if(campo[jogadaCPU][jogadaCPU2]== 1)
            {
                printf("Inimigo acertou em %d,%d!\n",jogadaCPU,jogadaCPU2);
            }
            campo2[jogadaCPU][jogadaCPU2] = 2;
            campo[jogadaCPU][jogadaCPU2] = 2;
            
            for(int i=0;i < Linha;i++)                //mostra o tabuleiro inteiro sem os navios da CPU
            {
                for(int j=0;j < Coluna;j++)
                {
                    printf("%d ",campo2[i][j]);
                }
                printf("\n");
            }
            for(int x=MetadeLinha;x < Linha;x++)            //checa para o fim do jogo no tabuleiro inimigo, se o número do campo for diferente de 1, incrementa na var somador, depois
            {                                               //caso o valor do somador seja igual ao número de linhas multiplicado pela metade das colunas do adversário, termina o jogo.
                for(int z=Metade;z < Coluna; z++)
                {
                    if(campo[x][z] != 1)
                    {
                        Somador++;
                        if(Somador == Linha_Multiplica_Metadecoluna)
                        {
                            printf("Ganhaste o jogo\n");
                            terminaJogo = 0;
                        }
                    }
                }
            }
            Somador = 0;

            for(int x=0;x < MetadeLinha;x++)            //checa para o fim do jogo no tabuleiro aliado, se o número do campo for diferente de 1, incrementa na var somador, depois
            {                                               //caso o valor do somador seja igual ao número de linhas multiplicado pela metade das colunas do jogador, termina o jogo.
                for(int z=0;z < Metade; z++)
                {
                    if(campo[x][z] != 1)
                    {
                        Somador++;
                        if(Somador == Linha_Multiplica_Metadecoluna)
                        {
                            printf("Perdeste o jogo\n");
                            terminaJogo = 0;
                        }
                    }
                }
            }
            Somador = 0;

    } while(terminaJogo==1);
}