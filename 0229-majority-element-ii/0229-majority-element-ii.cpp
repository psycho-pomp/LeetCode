class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int occured=nums.size()/3;
        vector<int> res;
        cout<<occured<<endl;
        unordered_map<int,int>ump;
        for(auto val:nums){
            ump[val]+=1;
        }
        for(auto val:ump){
            if(val.second>occured){
                res.push_back(val.first);
            }
            
        }
        return res;
        
    }
};