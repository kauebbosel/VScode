#include <stdio.h>

int main(){
    int controle = 0;

    for(int i = 1; i < 101; i++){
        if(i % 3 == 0 && i % 5 != 0){
            printf("Fizz\n");
            continue;
        }
        if(i % 5 == 0 && i % 3 != 0){
            printf("Buzz\n");
            continue;
        }
        if(i % 3 == 0 && i % 5 == 0){
            printf("Fizzbuzz\n");
            continue;
        }
        printf("%d\n", i );
    }
}