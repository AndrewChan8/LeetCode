class Solution:
    def romanToInt(self, s: str) -> int:
        roman = {'I': 1, 'V' : 5, 'X' : 10, 'L' : 50, 'C' : 100, 'D' : 500, 'M' : 1000}
        num = 0
        prev = 0
        for char in s:
            num += roman[char]
            if roman[char] > prev:
                num -= 2 * prev
            prev = roman[char]

        return num