class Solution {
public:
    void generatePermute(vector<int>& nums,vector<int>& temp,unordered_map<int,int>& ump,vector<vector<int>>& result){
        if(temp.size()==nums.size()){
            result.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(ump[i]==0){
                temp.push_back(nums[i]);
                ump[i]=1;
                generatePermute(nums,temp,ump,result);
                temp.pop_back();
                ump[i]=0;
                
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> temp;
        unordered_map<int,int> ump;
        generatePermute(nums,temp,ump,result);
        return result;
        
    }
};