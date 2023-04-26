class Solution:
    def fib(self, n: int) -> int:
        if n < 2:
            return n
        i, j = 0, 1
        k = 0
        for x in range(n-1):
            k = i + j
            i = j
            j = k
        return j