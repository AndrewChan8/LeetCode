# class Solution:
#     def addDigits(self, num: int) -> int:
#         sum = 0
#         while num:
#             sum += num % 10
#             num //= 10
#         if sum < 10:
#             return sum
#         return self.addDigits(sum)
    
class Solution:
    def addDigits(self, num: int) -> int:
        while num > 9:
            sum = 0
            while num:
                sum += num % 10
                num //= 10
            num = sum
        return num