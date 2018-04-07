// First Solution (Runtime: 9ms)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        int jlen = J.length();
        int slen = S.length();
        for (int i = 0; i < slen; i++) {
            // Check whether this stone belongs to jewels
            for (int j = 0; j < jlen; j++) {
                if (S[i] == J[j]) {
                    result++;
                    break;
                }
            }
        }
        return result;
    }
};

// Second Solution (Runtime: 8ms)
class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int result = 0;
        int jlen = J.length();
        int slen = S.length();
        unordered_map<char, int> stone;
        for (int i = 0; i < jlen; i++) {
            stone[J[i]] = 1;
        }
        for (int i = 0; i < slen; i++) {
            // Check if there is a corresponding key
            if (stone.find(S[i]) != stone.end()) {
                result++;
            }
        }
        return result;
    }
};