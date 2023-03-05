class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,res=0;
        for(int value:nums){
            if(value){
                count++;
                res=max(count,res);
            }
            else{
                count=0;
            }
        }
        return res;
        
    }
};