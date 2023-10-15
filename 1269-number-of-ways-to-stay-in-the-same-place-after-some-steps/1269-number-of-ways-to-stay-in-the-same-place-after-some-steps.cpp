class Solution {
    long long mod = 1e9+7;
    
    int solve(int ind, int steps, vector<vector<int>> &dp, int len){
        if(!steps) return !ind;
        
        if(dp[ind][steps] != -1) return dp[ind][steps];
        
        long long ans = solve(ind, steps-1, dp, len);
        
        if(ind > 0) ans = (ans + solve(ind-1, steps-1, dp, len)) % mod;
        if(ind < len-1) ans = (ans + solve(ind+1, steps-1, dp, len)) % mod;
        
        return dp[ind][steps] = ans;
    }
    
public:
    
    int numWays(int steps, int len) {
        vector<vector<int>> dp(steps+1, vector<int> (steps+1, -1));
        
        return solve(0, steps, dp, len);
    }
};