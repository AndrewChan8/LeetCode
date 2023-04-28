class Solution:
    def convertToBase7(self, num: int) -> str:
        base7 = ""
        neg = '-' if num < 0 else ''
        num = abs(num)
        while num:
            base7 = str(num % 7) + base7
            num //= 7
        return neg + base7 if base7 else "0"