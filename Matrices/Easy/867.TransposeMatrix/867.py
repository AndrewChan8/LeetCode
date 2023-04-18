from typing import List

class Solution:
    def transpose(self, matrix: List[List[int]]) -> List[List[int]]:
        m,n=len(matrix),len(matrix[0])
        ret = [[None] * m for i in range(n)]
        for i in range(m):
            for j in range(n):
                ret[j][i]=matrix[i][j]
        return ret