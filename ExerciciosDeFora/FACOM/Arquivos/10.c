/* Fac¸a um programa que receba o nome de um arquivo de entrada e outro de sa´ıda. O
arquivo de entrada contem em cada linha o nome de uma cidade (ocupando 40 caracte- ´
res) e o seu numero de habitantes. O programa dever ´ a ler o arquivo de entrada e gerar ´
um arquivo de sa´ıda onde aparece o nome da cidade mais populosa seguida pelo seu
numero de habitantes. */

#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char nomeArquivo[100], nomeArquivo2[100], str[100], strmaior[100];
    int populacao=0, popMaior=0;

 
    printf("arquivo 1\n:");
    fgets(nomeArquivo, sizeof(nomeArquivo), stdin);

    for(int i=0; nomeArquivo[i] != '\0'; i++){
        if(nomeArquivo[i] == '\n'){
            nomeArquivo[i] = '\0';
        }
    }
    fp = fopen(nomeArquivo, "r+");            //arq.txt possui o seguinte formato: "cidade população" indefinidas vezes
    if(fp == NULL){
        printf("erro1\n");
    }
    
    while(fscanf(fp, "%s%d", str, &populacao) == 2){
        if(populacao > popMaior){
            popMaior = populacao;
            for(int i=0; i < strlen(str); i++){
                strmaior[i] = str[i];
            }
        }
    }

    printf("maior:%d", popMaior);

    

    fclose(fp);
    

}