class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        
        int length=nums.size();
        vector<int>freq(length+1);
        vector<vector<int>> res;
        for(int val:nums){
            if(freq[val]>=res.size()){
                res.push_back({});
            }
            res[freq[val]].push_back(val);
            freq[val]++;
        }
        
        return res;
        
        
    }
};