#include <stdio.h>
#include <string.h>


int romanToInt(char* s) {
    int sum = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'I'){
            sum = 1 + sum;
        }
        if(s[i] == 'V'){
            sum += 5;
        }
        if(s[i] == 'X'){
            sum += 10;
        }
        if(s[i] == 'L'){
            sum += 50;
        }
        if(s[i] == 'C'){
            sum += 100;
        }  
        if(s[i] == 'D'){
            sum += 500;
        }  
        if(s[i] == 'M'){
            sum += 1000;
        }  
    }
    return sum;
}