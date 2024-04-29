#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void codificar(char *entrada);
int tamanhoArquivo(FILE *arquivo);
char *arquivoParaVetor(FILE *arquivo);
void decodificar(char *nomeArquivo);
char *pegarEntrada();
void salvar(char *entrada);

void cifraCeasar(char *entrada, int chave);

int main(){

    char nomeArquivo[1000];
    int input_usuario;
    char* entrada;

    printf("(1.Codificar - 2.Decodificar - Numero-diferente.Sair)\n");
    scanf("%d", &input_usuario);

    if(input_usuario == 1) 
    {
        entrada = pegarEntrada();
        codificar(entrada);
        salvar(entrada);
        free(entrada);
    } else if ( input_usuario == 2) 
    {
        printf("Digite o arquivo para ser decodificado\n");
        scanf("%s", nomeArquivo);
        decodificar(nomeArquivo);
    } else 
    {
        printf("Saindo\n");
        return 0;
    }

}

char *pegarEntrada() {
    char entrada[1000], *retorno;
    printf("digite uma mensagem\n");

    scanf("\n%[^\n]s", entrada);
    
    retorno = malloc(sizeof(char) * strlen(entrada));
    strcpy(retorno, entrada);
    return retorno;
}

void codificar(char *entrada) {
    int chave;

    printf("Digite uma chave\n");
    scanf("%d", &chave);

    cifraCeasar(entrada, chave);
};

void cifraCeasar(char *entrada, int chave){
    int var, i;

    for(i = 0; i < (int)strlen(entrada); i++) {
        var = ((int)(entrada[i]) + chave);
        if(var < 65 || (var > 90 && var < 97 && chave < 0)) 
            var += 26;
        else if(var > 122 || (var > 90 && var < 97 && chave > 0)) 
            var -= 26;
        entrada[i] = (char)var;
    }
}

void salvar(char *entrada) {
    FILE *file;

    file = fopen("cifrado.txt", "w");
    fprintf(file ,"%s", entrada);
    fclose(file);
}

int tamanhoArquivo(FILE *arquivo) {
    int contador = 0;

    fseek(arquivo, 0, SEEK_END);
    contador = ftell(arquivo);
    fseek(arquivo, 0, SEEK_SET);

    return contador;
}
char *arquivoParaVetor(FILE *arquivo) {
    int tamanho;
    char * retorno;

    tamanho = tamanhoArquivo(arquivo);
    retorno = malloc(sizeof(char) * tamanho);
    fscanf(arquivo, "%[^\n]s", retorno);

    return retorno;
}

void decodificar(char *nomeArquivo) {
    char *conteudo;
    int chave;
    FILE *arquivo;

    arquivo = fopen(nomeArquivo, "r");
    if(arquivo == NULL) {
        printf("Arquivo não encontrado\n");
        exit(1);
    }
    conteudo = arquivoParaVetor(arquivo);    
    fclose(arquivo);

    printf("Digite uma chave\n");
    
    scanf("%d", &chave);
    cifraCeasar(conteudo, chave*(-1));
    printf("a mensagem decodificada foi: %s \n", conteudo);
    free(conteudo);
}