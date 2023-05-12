from typing import List

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        n = len(digits)
        for i in range(n - 1, -1, -1):
            if digits[i] < 9:
                digits[i] += 1
                return digits
            else:
                digits[i] = 0
        digits.insert(0, 1)
        return digits

class Solution:
    def plusOne(self, digits: List[int]) -> List[int]:
        str_digits = [str(i) for i in digits]
        str_digits = ''.join(str_digits)
        val = int(str_digits) + 1
        str_val = str(val)
        return [int(char) for char in str_val]