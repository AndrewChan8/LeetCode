class Solution:
    def addStrings(self, num1: str, num2: str) -> str:
        carry = 0
        result = []
        i, j = len(num1) - 1, len(num2) - 1

        while i >= 0 or j >= 0:
            x = int(num1[i]) if i >= 0 else 0
            y = int(num2[j]) if j >= 0 else 0
            carry, digit = divmod(x + y + carry, 10)
            result.append(str(digit))
            i, j = i - 1, j - 1

        if carry:
            result.append(str(carry))

        return ''.join(result[::-1])
