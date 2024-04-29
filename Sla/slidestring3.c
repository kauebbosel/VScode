#include <stdio.h>
#include <string.h>

int main(){

int i;
char str[10], str2[10];

    fgets(str, sizeof(str), stdin);
    fgets(str2, sizeof(str2),stdin);

    printf("", strcmp(str,str2));
    if(strcmp(str,str2)==0)
    {
        printf("cu");
    }
    else
    {
        strcat(str,str2);
        printf("concatenação:%s", str);
    }






}