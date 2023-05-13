int isPowerOfThree(int n){
    int num = 1;
    while(num < n){
        num *= 3;
    }
    return num == n;
}