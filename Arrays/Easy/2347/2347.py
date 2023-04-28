from typing import List

class Solution:
    def bestHand(self, ranks: List[int], suits: List[str]) -> str:
        if len(set(suits)) == 1:
            return "Flush"
        counter = {}
        for rank in ranks:
            if rank not in counter:
                counter[rank] = 0
            counter[rank] += 1
        cards = max(counter.values())
        if cards > 2:
            return "Three of a Kind"
        elif cards == 2:
            return "Pair"
        else:
            return "High Card"