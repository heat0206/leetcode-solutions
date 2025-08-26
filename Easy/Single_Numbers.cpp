// LeetCode Problem 136: Single Number
// Difficulty: Easy
// Approach: Using Bitwise XOR to cancel the duplicate numbers.

public:
    int singleNumber(vector<int>& nums) {
       int ans=0;
       for(int val:nums)
       {
        ans^=val;
       }
       return ans;
    }
};
