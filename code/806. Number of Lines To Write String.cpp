// Runtime: 3ms
class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> result;
        int lines = 1;
        int units = 0;
        int len = S.length();
        for (int i = 0; i < len; i++) {
            if (units + widths[S[i] - 'a'] <= 100) {
                // if it can fit in the rest of the positions
                units += widths[S[i] - 'a'];
            } else {
                // if it can't fit in the rest of the positions
                // creat a new lines to put it in
                lines++;
                units = widths[S[i] - 'a'];
            }
        }
        result.push_back(lines);
        result.push_back(units);
        return result;
    }
};