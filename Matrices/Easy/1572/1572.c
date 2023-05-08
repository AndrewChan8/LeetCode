int diagonalSum(int** mat, int matSize, int* matColSize){
    int sum = 0;
    for(int i = 0; i < matSize; i++){
        sum += mat[i][i];
        sum += mat[matSize - i - 1][i];
    }
    if(matSize % 2){
        sum -= mat[matSize/2][matSize/2];
    }
    return sum;
}