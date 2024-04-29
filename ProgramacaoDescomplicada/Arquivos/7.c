/*Crie um programa que compara duas strings (nao use a func¸ ˜ ao strcmp).*/

#include <stdio.h>
#include <string.h>

int Compare(char *string, char *string2);

int main(){
    char String[100], String2[100], teste;
    int i=0;

        printf("Digite\n");
        fgets(String, 100, stdin);
        for(int i=0; i < strlen(String); i++){
            if(String[i] == '\n'){
                String[i] = '\0';
            }
        }
        fgets(String2, 100, stdin);
    
    printf("%s %s %d\n", String, String2, Compare(String, String2));

}

int Compare(char *string, char *string2){

    for(int i = 0; i < strlen(string); i++){
        if (string[i] != string2[i]){
            printf("Sao diferentes\n");
            return 1;
        }
    }
    return 0;

}