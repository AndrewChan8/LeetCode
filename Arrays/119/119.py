from typing import List

# O(n^2) solution
class Solution1:
    def getRow(self, rowIndex: int) -> List[int]:
        row = [1]
        if rowIndex == 0:
            return row
        
        prevRow = Solution1.getRow(self, rowIndex - 1)
        for i in range(1, len(prevRow)):
            curr = prevRow[i - 1] + prevRow[i]
            row.append(curr)
        row.append(1)
        return row

# O(n) solution
class Solution:
    def getRow(self, rowIndex: int) -> List[int]:
        row = [1] * (rowIndex + 1)
        up = rowIndex
        down = 1
        for i in range(1, rowIndex):
            row[i] = row[i-1] * up // down
            up -= 1
            down += 1
        return row
    
sol = Solution()
sol1 = Solution1()
print(sol.getRow(5))
print(sol1.getRow(5))