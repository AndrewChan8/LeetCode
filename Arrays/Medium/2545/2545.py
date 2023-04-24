from typing import List

class Solution:
    def sortTheStudents(self, score: List[List[int]], k: int) -> List[List[int]]:
        for i in range(len(score)):
            for j in range(len(score) - i - 1):
                if score[j][k] < score[j+1][k]:
                    score[j], score[j+1] = score[j+1], score[j]
        return score