char * addStrings(char * num1, char * num2){
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int maxLen = len1 > len2 ? len1 : len2;
    int carry = 0;

    char *res = (char *)malloc(maxLen + 2);

    int i = len1 - 1;
    int j = len2 - 1;
    int k = 0;

    while(i >= 0 || j >= 0 || carry){
        int n1 = i >= 0 ? num1[i] - '0' : 0;
        int n2 = j >= 0 ? num2[j] - '0' : 0;

        int sum = n1 + n2 + carry;
        carry = sum / 10;
        res[k] = (sum % 10) + '0';

        i--;
        j--;
        k++;
    }
    int end = k - 1;
    for(int start = 0; start < end; start++){
        char temp = res[start];
        res[start] = res[end];
        res[end--] = temp;
    }
    res[k] = '\0';
    return res;
}