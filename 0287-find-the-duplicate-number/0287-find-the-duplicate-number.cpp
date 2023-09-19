class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n=nums.size();
        vector<int> vc(n,0);
        for(int val:nums){
            vc[val]++;
            if(vc[val]>1) return val;
        }
        return 0;
    }
};