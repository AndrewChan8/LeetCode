class Solution:
    def frequencySort(self, s: str) -> str:
        hash = {}
        for char in s:
            if char not in hash:
                hash[char] = 0
            hash[char] += 1
        sorted_hash = dict(sorted(hash.items(), key=lambda item: -item[1]))
        freq = ""
        for key, value in sorted_hash.items():
            freq += key * value
        return freq

class Solution:
    def frequencySort(self, s: str) -> str:
        set1 = sorted(list(set(s)))
        chars = []
        for i in range(len(set1)):
            if set1[i] in s:
                chars.append(set1[i] * s.count(set1[i]))
        hash = sorted(chars, key=len)
        return ''.join(hash[::-1])