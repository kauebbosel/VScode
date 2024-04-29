#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int scoreOfString(char* s) {
    int sum = 0;
    s = (char*) malloc(sizeof(char)*4);

    if( strlen(s) % 2 == 0 ){
        for(int i = 1; i < strlen(s); i++){
            sum += s[i] - s[i - 1];
        }
    }
    return sum;
}