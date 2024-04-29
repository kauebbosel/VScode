#include <stdio.h>

int main(){
    int x, y, z;

    printf("digite os números");
    scanf("%d%d%d", &x, &y, &z);

    if(x > y && x > z){
    printf("%d é o maior", x);}

    if(y > x && y > z){
        printf("%d é o maior", y);}
    
    if(z > x && z > y){
        printf("%d é o maior", z);}

    

}