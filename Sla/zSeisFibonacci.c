#include <stdio.h>

int main(){

    int x, y, i;
    printf("digite os primeiros números da sequência");
    scanf("%d%d", &x, &y);

    i = 1;

    do {
    x = x + y;
    y = x - y;
    printf("%d%d \n", y);
    i=i+1;
    }
    while(i<=6);

    

}