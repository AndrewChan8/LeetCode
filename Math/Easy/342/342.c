int isPowerOfFour(int n){
    int i = 1;
    while (i < n){
        i *= 4;
    }
    return i == n;
}