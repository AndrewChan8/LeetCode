int isPalindrome(int x){
    if(x < 0)return 0;
    long int result = 0;
    long int temp = x;
    while (x != 0) {
        result = (result * 10) + x % 10;
        x /= 10;
    }
    return temp == result;
}