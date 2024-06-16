    #include <stdio.h>
    #include <stdbool.h>
    #include <string.h>
    #include <stdlib.h>

    bool isAnagram(char* s, char* t) {
        char temp;
        int validador=0;
        int len = strlen(s);

        if(strlen(s) != strlen(t) ){
            return false;
        }
        
        for(int i = 0; i < len; i++){
            for(int j = i + 1; j < len; j++){
                if(s[i] > s[j]){
                    temp = s[i];
                    s[i] = s[j];
                    s[j] = temp;
                }
                if(t[i] > t[j]){
                    temp = t[i];
                    t[i] = t[j];
                    t[j] = temp;
                }
            }
        }
        /*for(int i = 0; i < len; i++){
            if ( s[i] != t[i] ){
                validador = false;
            }
            if ( s[i] == t[i] ){
                validador = true;
            }
        }*/
        validador = strcmp(s, t);
        if(validador == 0){
            return true;
        }
        return false;
        
    }