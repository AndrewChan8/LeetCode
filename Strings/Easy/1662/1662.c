int arrayStringsAreEqual(char **word1, int word1Size, char **word2, int word2Size) {
    int len1 = 0, len2 = 0;
    for (int i = 0; i < word1Size; i++) {
        char *p = word1[i];
        while (*p != '\0') {
            len1++;
            p++;
        }
    }
    for (int i = 0; i < word2Size; i++) {
        char *p = word2[i];
        while (*p != '\0') {
            len2++;
            p++;
        }
    }
    char *s1 = (char *) malloc(len1 + 1);
    char *s2 = (char *) malloc(len2 + 1);
    char *t1 = s1, *t2 = s2;
    
    for (int i = 0; i < word1Size; i++) {
        char *p = word1[i];
        while (*p != '\0') {
            *s1++ = *p++;
        }
    }
    *s1 = '\0';
    for (int i = 0; i < word2Size; i++) {
        char *p = word2[i];
        while (*p != '\0') {
            *s2++ = *p++;
        }
    }
    *s2 = '\0';
    s1 = t1;
    s2 = t2;
    while (*s1 != '\0') {
        if (*s1 != *s2) {
            free(t1);
            free(t2);
            return 0;
        }
        s1++;
        s2++;
    }
    free(t1);
    free(t2);
    return 1;
}

int arrayStringsAreEqual(char **word1, int word1Size, char **word2, int word2Size) {
    int i = 0, j = 0, x = 0, y = 0;
    while(i < word1Size && j < word2Size){
        if(word1[i][x++] != word2[j][y++]){
            return 0;
        }
        if(word1[i][x] == '\0'){
            i++;
            x = 0;
        }
        if(word2[j][y] == '\0'){
            j++;
            y = 0;
        }
    }
    return i == word1Size && j == word2Size;
}