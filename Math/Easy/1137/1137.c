int tribonacci(int n){
    if(n < 2){
        return n;
    }
    int i = 0, j = 1, k = 1;
    int l = 0;
    for(int idx = 0; idx < n-2; idx++){
        l = i + j + k;
        i = j;
        j = k;
        k = l;
    }
    return k;
}