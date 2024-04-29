#include <stdio.h>
#include <string.h>

int main(){
    int i;
    char string[30], str[10];


    fgets(string, sizeof(string), stdin);

    printf (" \n After the reverse of a string: %s ", strrev(string));  


}