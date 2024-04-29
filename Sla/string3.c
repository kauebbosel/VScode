#include <stdio.h>

int main(){
    int i,contador=1;
    char str[20];

    fgets(str, sizeof(str),stdin);
    for(i=0; str[i]!= '\n';i++)
    {
        if(str[i] == ' '){
            contador = contador + 1;
            printf("\ncontador:%d", contador);
        }
    }
}