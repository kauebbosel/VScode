/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    *returnSize = n;
    char **answer = (char **) malloc(n*sizeof(char*));
    for(int i = 1; i <= n; i++){
        answer[i-1] = (char*) malloc(sizeof(char)*9);
        if(i % 15 == 0 ){                                   
            strcpy(answer[i-1], "FizzBuzz");                                 
        }
        else if(i % 3 == 0){
            strcpy(answer[i-1], "Fizz");
        }
        else if(i % 5 == 0){
            strcpy(answer[i-1], "Buzz");
        }
        else
        {
            snprintf(answer[i-1], 9 ,"%d", i);
        }
    }
    return answer;
}