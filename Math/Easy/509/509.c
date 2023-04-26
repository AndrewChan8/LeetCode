int fib(int n){
    if(n < 2){
        return n;
    }
    int i = 0, j = 1;
    int k = j;
    for(int idx = 2; idx < n; idx++){
        k = i + j;
        i = j;
        j = k;
    }
    return j;
}