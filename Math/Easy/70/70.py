# class Solution:
#     def climbStairs(self, n: int) -> int:
#         arr = [0] * (n)
#         for i in range(n):
#             if i < 3:
#                 arr[i] = i + 1
#             else:
#                 arr[i] = arr[i-1] + arr[i-2]
#         return arr[-1]

class Solution:
    def climbStairs(self, n: int) -> int:
        x, y = 1, 1
        for i in range(n-1):
            z = x + y
            x = y
            y = z
        return y