// First Solution
class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> result;
        int num = A.size();
        for (int i = 0; i < num; i++) {
            // Find the index of A[i] in array B
            for (int j = 0; j < num; j++) {
                if (A[i] == B[j]) {
                    result.push_back(j);
                    break;
                }
            }
        }
        return result;
    }
};

// Second Solution
class Solution {
public:
    vector<int> anagramMappings(vector<int>& A, vector<int>& B) {
        vector<int> result;
        int num = A.size();
        unordered_map<int, int> numbers;
        for (int i = 0; i < num; i++) {
            numbers[B[i]] = i;
        }
        for (int i = 0; i < num; i++) {
            result.push_back(numbers[A[i]]);
        }
        return result;
    }
};