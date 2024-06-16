#include <stdio.h>
#include <stdlib.h>

void main(char* s, int sSize) {
    char temp;

    s = (char*)malloc(sizeof(char)*5);

    s[0] = 'h';
    s[1] = 'e';
    s[2] = 'l';
    s[3] = 'l';
    s[4] = 'o';

    int i = 0;
    int j = 4;

    printf("teste: %s\n", s);

    for(i = 0; i < 2; i++){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        j--;
    }
    printf("teste 2: %s\n", s);
}