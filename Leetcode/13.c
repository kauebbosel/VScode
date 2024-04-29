#include <stdio.h>
#include <string.h>


int romanToInt(char* s) {
    int sum = 0;
    for(int i = 0; i < strlen(s); i++){
        if(s[i] == 'I'){
                if(s[i + 1] == 'V')
                {
                    sum += 4;
                    i++;
                    continue;
                }
                if(s[i + 1] == 'X')
                {
                    sum += 9;
                    i++;
                    continue;
                }
            sum = 1 + sum;
        }
        if(s[i] == 'V'){
            sum += 5;
        }
        if(s[i] == 'X'){
            {
                if(s[i + 1] == 'L')
                {
                    sum += 40;
                    i++;
                    continue;
                }
                if(s[i + 1] == 'C')
                {
                    sum += 90;
                    i++;
                    continue;
                }
            }
            sum += 10;
        }
        if(s[i] == 'L'){
            sum += 50;
        }
        if(s[i] == 'C'){
            {
                if(s[i + 1] == 'D')
                {
                    sum += 400;
                    i++;
                    continue;
                }
                if(s[i + 1] == 'M')
                {
                    sum += 900;
                    i++;
                    continue;
                }
            }
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