#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int  main(int x) {
    x = 100;
    char *string = (char *) malloc(sizeof(char) * x);
    *string = x;
    printf("%s ", string);
        
    return 0;
}
