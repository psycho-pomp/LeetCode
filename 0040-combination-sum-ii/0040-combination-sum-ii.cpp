class Solution {
public:
    void getCombinationSum2(int i,int n,vector<int>& candidates, int target,vector<int>& temp,vector<vector<int>>& ans) {
        
        if(i==n){
            if(target==0){
                ans.push_back(temp);
            }
            return;
        }
        if(target>=candidates[i]){
            temp.push_back(candidates[i]);
            getCombinationSum2(i+1,n,candidates,target-candidates[i],temp,ans);
            temp.pop_back();
        }
        int currIdx=i+1;
        while(currIdx<n && candidates[currIdx]==candidates[i]){
            currIdx++;
            
        }
        //cout<<currIdx<<endl;
        getCombinationSum2(currIdx,n,candidates,target,temp,ans);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        getCombinationSum2(0,candidates.size(),candidates,target,temp,ans);
        return ans;
        
    }
};