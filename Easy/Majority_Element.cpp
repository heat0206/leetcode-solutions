//Leetcode Problem 169 : Majority Element
//Difficulty : Easy
//Approach : Used Moore's Algorithm to optimize the solution.


class Solution {
public:
    int majorityElement(vector<int>& nums)
    {
        int freq=0,ans=0;

        // Traverse the entire array
        for(int i=0;i<nums.size();i++)
        {
            if(freq==0)
            {
                ans=nums[i];
            }
            if(ans==nums[i])
            {
                 // If current element matches candidate, increment freq.
                freq++;
            }
            else
            {
                // Else,decrement freq (cancel out one occurrence).
                freq--;
            }
        }

        //At the end ans holds the majority element.
        return ans;
    }
};
