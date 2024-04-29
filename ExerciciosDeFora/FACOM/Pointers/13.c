/*Elabore uma func¸ao que receba duas strings como par ˜ ametros e verifique se a segunda ˆ
string ocorre dentro da primeira. Use aritmetica de ponteiros para acessar os caracteres ´
das strings.*/

#include <stdio.h>
#include <string.h>

void compara_string(char str[30], char str2[30]);

int main(){
    char str[30],str2[30];
    int c=0;

    fgets(str, sizeof(str),stdin);

    fgets(str2, 30, stdin);

  //  printf("%s%s",str,str2);

    compara_string(str,str2);
    
}

void compara_string(char str[30], char str2[30]){
    int compara;
    char string[30];
    for(int j=0;j < strlen(str2);j++){
        for(int i=0; i < strlen(str2);i++){

            compara = strncmp(str, str2, strlen(str2));

            if(str[j] == str2[i]){
                while(string[z]!= '\0'){
                    string[z] = str[i];
                }
                string[0] = str[i];
                    if (compara == 0){
                        printf("Passa por dentro\n");
                        } 
                        else if(compara<0){
                        printf("A primeira string e maior\n");
                        } 
                        else if(compara>0){
                        printf("A segunda string e maior\n");
                    }
                    break;
            }
        }       
    }
}