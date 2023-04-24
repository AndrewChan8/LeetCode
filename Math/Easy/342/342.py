class Solution:
    def isPowerOfFour(self, n: int) -> bool:
        i = 1
        while i < n:
            i *= 4
        return i == n