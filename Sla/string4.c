#include <stdio.h>

int main(){
    int i=0;
    char caracter[2], caracter2[2],str[20];

    fgets(str,sizeof(str),stdin);
    
    printf("digite caracter 1");
    scanf("%c", caracter);
    
    scanf("%c", caracter2); //por algum motivo ele estava pulando meu scanf, ent botei outro para ele pular esse
    
    printf("digite caracter2");
    scanf("%c", caracter2);

    for(i=0; str[i]!='\n'; i++)
    {
        if(str[i]== caracter[0])
        {
            str[i] = caracter2[0];
        }
    }
    printf("string modificada:%s", str);
}