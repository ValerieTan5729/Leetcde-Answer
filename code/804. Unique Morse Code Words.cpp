// First Solution (Runtime:7 ms)
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        map<char, string> table; // store the International Morse Code
        set<string> translate;
        // initialize table
        initTable(table);
        int num = words.size();
        for (int i = 0; i < num; i++) {
            int len = words[i].length();
            string temp = "";
            for (int j = 0; j < len; j++) {
                temp += table[words[i][j]];
            }
            translate.insert(temp);
        }
        return translate.size();
    }

private:
    void initTable(map<char, string>& table) {
        table['a'] = ".-";
        table['b'] = "-...";
        table['c'] = "-.-.";
        table['d'] = "-..";
        table['e'] = ".";
        table['f'] = "..-.";
        table['g'] = "--.";
        table['h'] = "....";
        table['i'] = "..";
        table['j'] = ".---";
        table['k'] = "-.-";
        table['l'] = ".-..";
        table['m'] = "--";
        table['n'] = "-.";
        table['o'] = "---";
        table['p'] = ".--.";
        table['q'] = "--.-";
        table['r'] = ".-.";
        table['s'] = "...";
        table['t'] = "-";
        table['u'] = "..-";
        table['v'] = "...-";
        table['w'] = ".--";
        table['x'] = "-..-";
        table['y'] = "-.--";
        table['z'] = "--..";
    }
};

// Second Solution (Runtime:6 ms)
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        unordered_set<string> translate; // or set<string> translate;
        // store the International Morse Code
        vector<string> table = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        int num = words.size();
        for (int i = 0; i < num; i++) {
            int len = words[i].length();
            string temp = "";
            for (int j = 0; j < len; j++) {
                temp += table[words[i][j] - 'a'];
            }
            if (translate.find(temp) == translate.end()) {
                translate.insert(temp);
                // if use set, just use 'translate.insert(temp);' directly
            }
        }
        return translate.size();
    }
};