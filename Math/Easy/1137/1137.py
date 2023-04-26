class Solution:
    def tribonacci(self, n: int) -> int:
        if n < 2:
            return n
        i = 0
        j = 1
        k = 1
        l = 0
        for idx in range(n - 2):
            l = i + j + k
            i = j
            j = k
            k = l
        return k