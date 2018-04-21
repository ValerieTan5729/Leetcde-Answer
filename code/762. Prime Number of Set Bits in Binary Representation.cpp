// First Solution(Runtime: 39ms)
class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
        int result = 0;
        for (int i = L; i <= R; i++) {
            // determine every number in [L, R]
            int bits = 0;
            for (int b = i; b; b >>= 1) { // shift operation
                // determine if the end is 1
                bits += b & 1;
            }
            result += primes.count(bits);
        }
        return result;
    }
};

// Second Solution(Runtime: 21ms)
class Solution {
public:
    int countPrimeSetBits(int L, int R) {
        set<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
        int result = 0;
        for (int i = L; i <= R; i++) {
            bitset<100> b(i);
            result += primes.count(b.count());
        }
        return result;
    }
};