// First Solution, Runtime: 122ms
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int result = 0;
        // Use multiset to sort the array
        multiset<int> temp;
        for (int i = 0; i < nums.size(); i++) {
            temp.insert(nums[i]);
        }
        for (multiset<int>::iterator it = temp.begin(); it != temp.end(); ) {
            result += (*it);
            it++;
            it++;
        }
        return result;
    }
};

// Second Solution, Runtime: 79ms
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int result = 0;
        sort(nums.begin(), nums.end());
        // Every two numbers group into pairs
        for (int i = 0; i < nums.size(); i += 2) {
            result += nums[i];
        }
        return result;
    }
};