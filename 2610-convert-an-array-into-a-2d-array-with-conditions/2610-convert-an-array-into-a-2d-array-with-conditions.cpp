class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>ump;
        for(int val:nums){
            ump[val]++;   
        }
        
        int length=nums.size();
        vector<vector<int>> res;
        while(length>0){
            vector<int> temp;
            for(auto m:ump){
                if(m.second>0){
                    temp.push_back(m.first);
                    ump[m.first]--;
                    length--;
                    
                }
                
            }
            // for(auto m:ump){
            // cout<<m.first<<":"<<m.second<<endl;
            // }
            res.push_back(temp);
        }
        return res;
        
        
    }
};