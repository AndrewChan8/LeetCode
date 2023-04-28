char* bestHand(int* ranks, int ranksSize, char* suits, int suitsSize) {
    int flush = 1;
    for (int i = 1; i < suitsSize; i++) {
        if (suits[i] != suits[0]) {
            flush = 0;
            break;
        }
    }
    if (flush) {
        return "Flush";
    }
    int three_of_a_kind = 0;
    int pair = 0;
    for (int i = 0; i < ranksSize; i++) {
        int count = 0;
        for (int j = 0; j < ranksSize; j++) {
            if (ranks[j] == ranks[i]) {
                count++;
            }
        }
        if (count > 2) {
            three_of_a_kind = 1;
        } else if (count == 2) {
            pair = 1;
        }
    }
    if (three_of_a_kind) {
        return "Three of a Kind";
    }
    if (pair) {
        return "Pair";
    }
    return "High Card";
}