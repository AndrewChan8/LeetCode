def frequencySort(s: str) -> str:
    hash = {}
    for char in s:
        if char not in hash:
            hash[char] = 0
        hash[char] += 1
    sorted_hash = dict(sorted(hash.items(), key=lambda item: -item[1]))
    freq = ""
    k = sorted_hash.keys()
    for i in range(len(sorted_hash), -1, -1):
        freq += k[i] * sorted_hash[k[i]]
    return freq


frequencySort("treeterweTREE")