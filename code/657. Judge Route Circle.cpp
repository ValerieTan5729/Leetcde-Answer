// Runtime: 19ms
class Solution {
public:
    bool judgeCircle(string moves) {
        int ud = 0; // count the number of 'U' and 'D'
        int lr = 0; // count the number of 'L' and 'R'
        int len = moves.length();
        for (int i = 0; i < len; i++) {
            if (moves[i] == 'U') {
                ud++;
            } else if (moves[i] == 'D') {
                ud--;
            } else if (moves[i] == 'L') {
                lr++;
            } else if (moves[i] == 'R') {
                lr--;
            }
        }
        if (ud == 0 && lr == 0) {
            return true;
        }
        return false;
    }
};