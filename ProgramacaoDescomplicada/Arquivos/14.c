/*. Fac¸a um programa que leia uma palavra (maximo de 50 letras) e some 1 no valor ASCII ´
de cada caractere da palavra. Imprima a string resultante.*/

#include <stdio.h>
#include <string.h>

int main(){
    char String[100];

    printf("Digite\n");
    fgets(String, 100, stdin);
    for(int i = 0; i < strlen(String); i++){
        if(String[i] == '\n'){
            String[i] = '\0';
        }
    }
    printf("%s\n",String);
    for(int i=0; i < strlen(String); i++){
        String[i] = String[i] -32;
    }

    printf("%s\n",String);
}