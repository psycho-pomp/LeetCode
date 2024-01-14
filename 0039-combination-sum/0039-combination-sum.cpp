class Solution {
public:
    void getCombinationSum(int i,int n,vector<int>& candidates, int target,vector<int>& temp,vector<vector<int>>& ans){
        if(i>=n){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(target>=candidates[i]){
            temp.push_back(candidates[i]);
            getCombinationSum(i,n,candidates,target-candidates[i],temp,ans);
            temp.pop_back();
        }
        getCombinationSum(i+1,n,candidates,target,temp,ans);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>temp;
        vector<vector<int>> ans;
        getCombinationSum(0,candidates.size(),candidates,target,temp,ans);
        return ans;
        
    }
};