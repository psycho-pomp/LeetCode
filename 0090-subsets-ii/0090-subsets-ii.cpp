class Solution {
public:
    void generateSusbetSumWithDup(int idx,vector<int>& nums,int n,vector<vector<int>>& result,vector<int>& temp){
        if(idx==n){
            result.push_back(temp);
            return;
        }
        
        temp.push_back(nums[idx]);
        generateSusbetSumWithDup(idx+1,nums,n,result,temp);
        temp.pop_back();
        int currIdx=idx+1;
        while(currIdx<n && nums[currIdx]==nums[idx]){
            currIdx++;   
        }
        generateSusbetSumWithDup(currIdx,nums,n,result,temp);
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        generateSusbetSumWithDup(0,nums, nums.size(),result,temp);
        return result;
        
        
        
        
    }
};