from typing import List

class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        zero = set()
        one = set()
        losers = set()
        for winner, loser in matches:
            if winner not in one and winner not in losers:
                zero.add(winner)

            if loser in zero:
                zero.remove(loser)
                one.add(loser)
            elif loser in one:
                one.remove(loser)
                losers.add(loser)
            elif loser in losers:
                continue
            else:
                one.add(loser)

        return [sorted(list(zero)), sorted(list(one))]