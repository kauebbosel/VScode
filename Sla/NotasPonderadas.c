#include <stdio.h>
int main(){
    
    float n1, n2, n3, media;

    printf("DIgite suas notas");
    scanf("%f%f%f", &n1, &n2, &n3);

    media = ((n1*4+n2*3+n3*3)/10);

    printf("Media: %f", media);
    if(media>5 || media==5){
        printf("\nAprovado");}
    else{
        printf("\nReprovado");}
    




}
