from typing import List

class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = {}
        for str in strs:
            k = tuple(sorted(str))
            if k not in result:
                result[k] = []
            result[k].append(str)
        return result.values()