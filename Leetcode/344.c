#include <stdio.h>
#include <string.h>

void reverseString(char* s, int sSize) {
    char temp;
    int i = 0;
    int j = strlen(s) - 1;

    while(i <= j){
        temp = s[i];
        s[i] = s[j];
        s[j] = temp;
        i++;
        j--;
    }
}