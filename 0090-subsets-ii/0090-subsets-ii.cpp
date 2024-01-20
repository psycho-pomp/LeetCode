class Solution {
public:
    void generateSusbetSumWithDup(int idx,vector<int>& nums,int n,vector<vector<int>>& result,vector<int>& temp){
        result.push_back(temp);
        for(int i=idx;i<n;i++){
            if(i>idx && nums[i]==nums[i-1]) continue;
            temp.push_back(nums[i]);
            generateSusbetSumWithDup(i+1,nums,n,result,temp);
            temp.pop_back();
        }
        
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        sort(nums.begin(),nums.end());
        generateSusbetSumWithDup(0,nums, nums.size(),result,temp);
        return result;
        
        
        
        
    }
};