class Solution {
public:
    void getCombinationSum2(int i,int n,vector<int>& candidates, int target,vector<int>& temp,vector<vector<int>>& ans) {
        
        
        if(target==0){
            ans.push_back(temp);
            return;
        }
        for(int idx=i;idx<n;idx++){
            if(idx>i && candidates[idx]==candidates[idx-1]) continue;
            if(target<candidates[idx]) break;
            temp.push_back(candidates[idx]);
            getCombinationSum2(idx+1,n,candidates,target-candidates[idx],temp,ans);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        getCombinationSum2(0,candidates.size(),candidates,target,temp,ans);
        return ans;
        
    }
};