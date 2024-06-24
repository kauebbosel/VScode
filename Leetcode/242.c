bool isAnagram(char* s, char* t) {
    int len = strlen(s);
    if( strlen(s) != strlen(t) ) {
        return false;
    }
    int * contaS = (int *) calloc(26, sizeof(int));
    int * contaT = (int *) calloc(26, sizeof(int));

    for(int i = 0; i < len; i++ ){
        contaS[s[i] - 'a']++;
    }
    for(int i = 0; i < len; i++){
        contaT[t[i] - 'a']++;
    }
    bool result = true;
    for(int i = 0; i < 26; i++){
        if(contaS[i] != contaT[i]) {
            result = false;
            break;
        }
    }
    free(contaS);
    free(contaT);
    return result;
}