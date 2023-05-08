# 1662 - Check if Two String Arrays are Equivalent
Given two string arrays word1 and word2, return true if the two arrays represent the same string, and false otherwise.

A string is represented by an array if the array elements concatenated in order forms the string.
## Examples:
```
Input: word1 = ["ab", "c"], word2 = ["a", "bc"]
Output: true
Explanation:
word1 represents string "ab" + "c" -> "abc"
word2 represents string "a" + "bc" -> "abc"
The strings are the same, so return true.
```
```
Input: word1 = ["a", "cb"], word2 = ["ab", "c"]
Output: false
```
```
Input: word1  = ["abc", "d", "defg"], word2 = ["abcddefg"]
Output: true
```