bool isPalindrome(char* s) {
    int sSize = strlen(s) - 1;
    int end = sSize;
    int i = 0;

    while ( i < end ) {
        if( !isalnum(s[i])){
            i++;
        }else if( !isalnum(s[end])){
            end--;
        }else if( tolower( s[i] ) != tolower( s[end] ) ){
            return false;
        } else{
            i++;
            end--;
        }
    }
    return true;
}