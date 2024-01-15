class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        for(int num=0;num<(1<<n);num++){
            vector<int> temp;
            for(int i=0;i<n;i++){
                if(num & (1<<i)){
                    temp.push_back(nums[i]);
                }
            }
            res.push_back(temp);
        }
        return res;
        
        
        
    }
};