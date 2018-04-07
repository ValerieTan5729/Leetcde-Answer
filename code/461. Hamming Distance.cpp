// First Solution (Runtime: 3ms)
class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        int temp = x ^ y;
        for (int i = 0; i < 32; ++i) {
            // One-bit traversal
            result += (temp >> i) & 1;
        }
        return result;
    }
};

// Second Solution (Runtime: 3ms)
class Solution {
public:
    int hammingDistance(int x, int y) {
        int result = 0;
        int temp = x ^ y;
        while (temp) {
            result++;
            temp &= (temp - 1);
        }
        return result;
    }
};