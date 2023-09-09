class Solution {
public:
    int combinationSum4(vector<int>& nums, int target) {
        vector<unsigned> dp(target+1, 0);
        dp[0]=1; //base case

        for(int i=1; i<=target; i++){   //iterating i till target  
            for (auto n: nums){         //for every element in nums
                if (i>=n)
                    dp[i]+=dp[i-n];
            }
        }
        return dp[target];
    }
};