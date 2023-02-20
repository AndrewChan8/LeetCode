#include <stdio.h>
#include <stdlib.h>

int *getRow1(int rowIndex, int* returnSize){
    *returnSize = rowIndex + 1;
    int *row = (int *)malloc(sizeof(int) * (rowIndex + 1));
    if(rowIndex == 0){
        row[0] = 1;
    }else{
        int *prevRow = getRow1(rowIndex - 1, returnSize);
        for(int i = 1; i <= rowIndex; i++){
            row[i] += prevRow[i - 1] + prevRow[i];
        }
        row[0] = 1;
        free(prevRow);
    }
    return row;   
}

int *getRow(int rowIndex, int* returnSize){
    *returnSize = rowIndex + 1;
    int *row = (int *)malloc(sizeof(int) * (rowIndex + 1));
    row[0] = 1;
    long temp = 1;
    for(int i=1, up=rowIndex; i<=rowIndex; i++, up--){
        temp = temp * up / i;
        row[i] = temp;
    }
    return row;
}

int main(){
    int x = 6;
    int *row = getRow(5, &x);
    for(int i = 0; i < 6; i++){
        printf("%d ", row[i]);
    }
    printf("\n");
}