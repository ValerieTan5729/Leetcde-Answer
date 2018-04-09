// Runtime: 3ms
class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> result;
        // judge whether the number in [left, right] is self-dividing number
        for (int i = left; i <= right; i++) {
            int temp = 0;
            // judge whether the number i is self-dividing number by rules
            for (int j = i; j > 0; j /= 10) {
                if ((j % 10) == 0 || (i % (j % 10)) != 0) {
                    temp = -1;
                }
            }
            if (temp == 0) {
                result.push_back(i);
            }
        }
        return result;
    }
};