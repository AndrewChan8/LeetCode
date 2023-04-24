class Solution:
    def reverse(self, x: int) -> int:
        neg = -1 if x < 0 else 1
        x = abs(x)
        reverse = 0
        while x != 0:
            reverse = (reverse * 10) + x % 10
            x = x // 10
        reverse *= neg
        if reverse < -2**31 or reverse > 2**31 - 1:
            return 0
        else:
            return reverse