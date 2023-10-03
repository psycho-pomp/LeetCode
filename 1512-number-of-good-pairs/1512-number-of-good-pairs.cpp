class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int,int> ump;
        int res=0;
        for(auto value:nums){
            ump[value]+=1;
            res+=ump[value]-1;
        }
        
        // for(auto mp:ump){
        //     cout<<mp.second<<",";
        //     int curr=1;
        //     for(int i=2;i<mp.second;i++){
        //         curr+=i;
        //     }
        //     cout<<curr<<endl;
        //     res+=curr;
        // }
        return res;
        
    }
};