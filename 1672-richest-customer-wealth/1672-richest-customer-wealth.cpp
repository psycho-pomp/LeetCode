class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res;
        int max_wealth=0;
        for(int i=0;i<accounts.size();i++){
            res=0;
            for(int j=0;j<accounts[i].size();j++){
                res+=accounts[i][j];
            }
            max_wealth=max(res,max_wealth);
        }
        return max_wealth;
        
    }
};