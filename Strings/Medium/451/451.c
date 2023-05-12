#include <stdio.h>
#include <stdlib.h>

#define MAX 128

char* frequencySort(char* s) {
    int freq[MAX] = {0};
    int len = strlen(s);
    int i, j, max_freq = 0;
    
    for (i = 0; i < len; i++) {
        freq[s[i]]++;
        if (freq[s[i]] > max_freq) {
            max_freq = freq[s[i]];
        }
    }
    char* result = (char*) malloc(len + 1);
    
    char* temp = result;
    for (i = max_freq; i > 0; i--) {
        for (j = 0; j < MAX; j++) {
            if (freq[j] == i) {
                int k;
                for (k = 0; k < i; k++) {
                    *temp++ = j;
                }
            }
        }
    }
    *temp = '\0';
    return result;
}

char *frequencySort(char *s){
    int n = strlen(s);
    int freq[62] = {};
    char alphabet[62];
    for(int i = 0; i < 26; i++) alphabet[i] = 'A' + i;
    for(int i = 0; i < 26; i++) alphabet[i+26] = 'a' + i;
    for(int i = 0; i < 10; i++) alphabet[i+26+26]= '0' + i;

    for(int i = 0; i < n; i++){
        char c = s[i];
        if(c >= 'A' && c <= 'Z') freq[c-'A']++;
        if(c >= 'a' && c <= 'z') freq[c-'a'+26]++;
        if(c >= '0' && c <= '9') freq[c-'0'+52]++;
    }
    for(int i = 0; i < 62; i++){
        for(int j = i + 1; j < 62; j++){
            if(freq[i]<freq[j]){
                int temp = freq[i];
                freq[i] = freq[j];
                freq[j] = temp;
                char c = alphabet[i];
                alphabet[i] = alphabet[j];
                alphabet[j] = c;
            }
        }
    }
    int len=0;
    for(int i = 0; i < 62; i++){
        for(int k = 0; k < freq[i]; k++){
            s[len++] = alphabet[i];
        }
    }
    return s;
}