int countZeros(int n) {
    if(n==0){
        return 1;
    }
    if(n<10){
        return 0;
    }

    int rem = n%10;
    if(rem==0){
        return 1+countZeros(n/10);
    }
    return countZeros(n/10);
}
