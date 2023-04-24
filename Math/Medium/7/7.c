#define MAX 214748364

int reverse(int x) {
    int result = 0;
    while (x != 0) {
        if (result > MAX || result < -MAX)return 0;
        result = (result * 10) + x % 10;
        x /= 10;
    }
    return result;
}