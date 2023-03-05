class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(int value:nums){
            res+=(int)log10(value) & 1;
        }
        return res;
        
    }
};