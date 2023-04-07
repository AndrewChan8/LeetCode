int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    long max = -1;
    for(int i = 0; i < accountsSize; i++){
        long acc = 0;
        int *row = accounts[i];
        for(int j = 0; j < *accountsColSize; j++){
            acc += row[j];
        }
        if(max < acc){
            max = acc;
        }
    }
    return max;
}