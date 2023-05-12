/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
    returnSize = digitsSize;
    for(int i = digitsSize - 1; i >= 0; i--){
        if(digits[i] < 9){
            digits[i]++;
            return digits;
        }else{
            digits[i] = 0;
        }
    }
    int *newDigits = (int *)calloc(digitsSize + 1, sizeof(int));
    newDigits[0] = 1;
    returnSize++;
    return newDigits;
}