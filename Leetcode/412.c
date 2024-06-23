/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char* answer = ( char* ) malloc ( sizeof ( char ) * ( n * 9 ) );    //fiz uma string mais pra testar do q qualquer coisa, mas
    answer[1] = '\0';                                                   //não consigo fazer ela funcionar de jeito nenhum, ela eh
                                                                        //criada pra sobrar um monte de memória anyway
    int count = 0;

    for(int i = 0; i < n; i++){
        if(n % 3 == 0 && n % 5 == 0){                                   //podia usar um 15 em vez de 3 e 5
            strcat(answer, "fizzbuzz");                                 //a ideia eh adicionar fizzbuzz na string
            count += 9;
            continue;
        }
        if(n % 3 == 0){
            if(n == 3){
                strcpy (answer, "fizz");                                //como strcat vai pro final, fiz um strcpy pra primeira ocorrência
            }else{
                strcat(answer, "fizz");
            }
            count += 5;
        }
        if(n % 5 == 0){
            strcat(answer, "buzz");
            count += 5;
        }
        answer[count] = "n + '0'";                      //transforma o int em char
        answer++;                                       //passa p/ proximo elemento array
    }
    return answer;
}