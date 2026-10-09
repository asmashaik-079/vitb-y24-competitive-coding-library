class BitManipulation:

    @staticmethod
    def getBit(n, k):
        return (n >> k) & 1

    @staticmethod
    def setBit(n, k):
        return n | (1 << k)

    @staticmethod
    def clearBit(n, k):
        return n & ~(1 << k)

    @staticmethod
    def toggleBit(n, k):
        return n ^ (1 << k)

    @staticmethod
    def isPowerOfTwo(n):
        return n > 0 and (n & (n - 1)) == 0

    @staticmethod
    def countSetBits(n):
        count = 0
        while n > 0:
            count += n & 1
            n >>= 1
        return count