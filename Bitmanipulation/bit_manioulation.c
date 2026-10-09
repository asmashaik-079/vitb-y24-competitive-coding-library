#include <stdio.h>
#include <stdbool.h>

long long getBit(long long n, int k) {
    return (n >> k) & 1LL;
}

long long setBit(long long n, int k) {
    return n | (1LL << k);
}

long long clearBit(long long n, int k) {
    return n & ~(1LL << k);
}

long long toggleBit(long long n, int k) {
    return n ^ (1LL << k);
}

bool isPowerOfTwo(long long n) {
    return n > 0 && (n & (n - 1)) == 0;
}

int countSetBits(long long n) {
    int count = 0;

    while (n > 0) {
        count += n & 1LL;
        n >>= 1;
    }

    return count;
}

int main() {
    long long n = 10;
    int k = 1;

    printf("Get bit: %lld\n", getBit(n, k));
    printf("Set bit: %lld\n", setBit(n, k));
    printf("Clear bit: %lld\n", clearBit(n, k));
    printf("Toggle bit: %lld\n", toggleBit(n, k));
    printf("Is power of two: %s\n",
           isPowerOfTwo(8) ? "true" : "false");
    printf("Count set bits: %d\n", countSetBits(n));

    return 0;
}