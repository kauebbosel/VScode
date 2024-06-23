bool lemonadeChange(int* bills, int billsSize) {
    int notasCinco = 0, notasDez = 0;

    for(int i = 0; i < billsSize; i++){
        if(bills[i] == 5 ){
                notasCinco++;
        }

        if(bills[i] == 10 ){
            if(notasCinco >= 1 ){
                notasCinco--;
                notasDez++;
            } else{
                return false;
            }
        }

        if(bills[i] == 20) {
            if(notasCinco > 0 && notasDez > 0 ){
                notasCinco--;
                notasDez--;
            }else if (notasCinco >= 3 && notasDez <= 0 ){
                notasCinco -= 3;
            }else if (notasCinco == 0 || (notasCinco <= 3 && notasDez <= 0)){
                return false;
            }
        }
    }
    return true;
}   