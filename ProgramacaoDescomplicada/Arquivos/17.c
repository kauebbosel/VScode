/*Leia um vetor contendo letras de uma frase inclusive os espac¸os em branco. Retirar os
espac¸os em branco do vetor e depois escrever o vetor resultante.*/

#include <stdio.h>
#include <string.h>

int main(){
    char String[100], StringCopiada[100];
    
    printf("Digite\n");
    fgets(String, 100, stdin);
    printf("%s\n",String);

    for(int i = 0 ; i < strlen(String); i++){
        if(String[i] == '\n'){
            String[i] = '\0';
        }
    }

    for(int i = 0; i < strlen(String); i++){
        StringCopiada[i] = String[i];
    }
    
    for(int i = 0 ; i < strlen(String); i++){
        if(String[i] == ' '){
            for(int j = i; j < strlen(String); j++){
                String[j] = String[j+1];
            }
        }
    }

    printf("%s\n",String);
}