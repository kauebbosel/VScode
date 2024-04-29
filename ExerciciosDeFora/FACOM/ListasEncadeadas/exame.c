#include <stdio.h>
#include <stdlib.h>

typedef struct cel {
 char conteudo;
 struct cel *prox;
} celula;

int eh_vogal(char x);
int lista_vazia(celula * c);
celula *cria(void);
void insere_fim(celula * c, char x);
char remove_inicio(celula * c);
void grava_arquivo(celula * c, char *arquivo);
void le_arquivo(celula * c, char *arquivo);

int main()
{
 celula *listaEntrada, *listaVogais, *listaOutros;
 char removido;

 listaEntrada = cria();
 listaVogais = cria();
 listaOutros = cria();

 le_arquivo(listaEntrada, "entrada.txt");

 while (!lista_vazia(listaEntrada)) {
  removido = remove_inicio(listaEntrada);
  if (eh_vogal(removido)) {
   insere_fim(listaVogais, removido);
  } else {
   insere_fim(listaOutros, removido);
  }
 }

 grava_arquivo(listaVogais, "saidaVogais.txt");
 grava_arquivo(listaOutros, "saidaOutros.txt");

 return 0;
}

int eh_vogal(char x)
{
 if ((x == 'A') || (x == 'a') || (x == 'E') || (x == 'e') || (x == 'I')
     || (x == 'i') || (x == 'O') || (x == 'o') || (x == 'U')
     || (x == 'u')) {
  return 1;
 } else {
  return 0;
 }
}

int lista_vazia(celula * c)
{
 if (c->prox == NULL) {
  return 1;
 } else {
  return 0;
 }
}

celula *cria(void)
{
 celula *nova;

 nova = (celula *) malloc(sizeof(celula));
 nova->prox = NULL;
 return nova;
}

void insere_fim(celula * c, char x)
{
 celula *nova, *p;

 nova = (celula *) malloc(sizeof(celula));
 for (p = c; p->prox != NULL; p = p->prox) {
 }
 nova->conteudo = x;
 nova->prox = p->prox;
 p->prox = nova;
}

char remove_inicio(celula * c)
{
 char caractere;
 celula *p;

 caractere = c->prox->conteudo;
 p = c->prox;
 c->prox = p->prox;
 free(p);
 return caractere;
}

void le_arquivo(celula * c, char *arquivo)
{
 FILE *entrada;
 char lido;

 entrada = fopen(arquivo, "r");

 while (fscanf(entrada, "%c", &lido) == 1) {
  insere_fim(c, lido);
 }
 fclose(entrada);
}

void grava_arquivo(celula * c, char *arquivo)
{
 celula *p;
 FILE *saida;

 saida = fopen(arquivo, "w");

 for (p = c->prox; p != NULL; p = p->prox) {
  fprintf(saida, "%c", p->conteudo);
 }
 fclose(saida);
}
