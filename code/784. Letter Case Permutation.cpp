// Runtime: 8ms
class Solution {
public:
    vector<string> letterCasePermutation(string S) {
        vector<string> result;
        // recursive solution
        solve(S, 0, result);
        return result;
    }

    void solve(string S, int index, vector<string> & result) {
        int len = S.length();
        if (index == len) {
            // if the index is the end of the string S, we finish
            result.push_back(S);
        } else {
            // deal with the next letter firstly
            solve(S, index + 1, result);
            // deal with this letter
            if (S[index] >= 'a' && S[index] <= 'z') {
                S[index] -= 32;
                solve(S, index + 1, result);
            } else if (S[index] >= 'A' && S[index] <= 'Z') {
                S[index] += 32;
                solve(S, index + 1, result);
            }
        }
    }
};