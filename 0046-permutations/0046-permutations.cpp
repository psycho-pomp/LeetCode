class Solution {
public:
    void generatePermute(vector<int>& nums,vector<vector<int>>& ans,int idx){
        
        if(idx>=nums.size()){
            ans.push_back(nums);
            return;
        }
        for(int i=idx;i<nums.size();i++){
            swap(nums[i],nums[idx]);
            generatePermute(nums,ans,idx+1);
            swap(nums[i],nums[idx]);
            
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        generatePermute(nums,ans,0);
        return ans;
        
    }
};