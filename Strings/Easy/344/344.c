void reverseString(char* s, int sSize){
    int l = 0, r = sSize - 1;
    while(l < r){
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        l++;
        r--;
    }
}