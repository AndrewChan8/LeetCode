from typing import List

# class Solution:
#     def average(self, salary: List[int]) -> float:
#         salary.remove(min(salary))
#         salary.remove(max(salary))
#         return sum(salary) / len(salary)

class Solution:
    def average(self, salary: List[int]) -> float:
        sum = 0
        max = salary[0]
        min = salary[0]
        for s in salary:
            if s > max:
                max = s
            elif s < min:
                min = s
            sum += s
        sum = sum - min - max
        return sum / (len(salary) - 2)