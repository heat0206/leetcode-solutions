//Leetcode Problem 53 : Subarray Sum
//Difficulty: Medium
//Approach : Used Kadane's Algorithm to optimize the solution.



class Solution {
public:
    int maxSubArray(vector<int>& nums)
    {
        int maxSum=INT_MIN,currSum=0;
        for(int st : nums)
        {
            //Calculate the sum by adding each number.
            currSum += st;
            if(currSum>=0)
            {
                maxSum = max(currSum,maxSum);
            }
            //If the sum is negative it wont lead to maximum subarray sum.
            else
            {
                // If the vector is of only negative numbers
                maxSum=max(currSum,maxSum);
                currSum=0;
            }
        }
        return maxSum;
    }
};
