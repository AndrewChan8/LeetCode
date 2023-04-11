from typing import List

class Solution:
    def rotate(matrix: List[List[int]]) -> None:
        """
        Do not return anything, modify matrix in-place instead.
        """
        n = len(matrix)
        for i in range(n):
            for j in range(i+1, len(matrix[i])):
                matrix[i][j], matrix[j][i] = matrix[j][i], matrix[i][j]

        for i in range(n):
            # for j in range(len(matrix[i]) // 2):
            #     matrix[i][j], matrix[i][n-j-1] = matrix[i][n-j-1], matrix[i][j]
            matrix[i].reverse()