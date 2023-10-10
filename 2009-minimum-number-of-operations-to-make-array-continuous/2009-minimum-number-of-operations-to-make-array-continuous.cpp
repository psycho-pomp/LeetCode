class Solution {
public:
    //copied code
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MAX;
        set<int>s(begin(nums),end(nums));
        vector<int>sol(begin(s),end(s));

        for(int i=0;i<sol.size();i++)
        {
            int left = sol[i];
            int right = left + n-1;

            int j = upper_bound(begin(sol),end(sol),right)-begin(sol);
            int output = j-i;
            int output2 = n-output;
            ans = min(ans,output2);
            
               }
        return ans;
    }
};