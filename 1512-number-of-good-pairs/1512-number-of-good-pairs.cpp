class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> ump;
        int res=0;
        for(auto value:nums){
            ump[value]+=1;
            res+=ump[value]-1;
        }
        return res;
        
    }
};