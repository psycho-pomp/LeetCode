class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count=0,res=0;
        for(int value:nums){
            if(value){
                count++;  
            }
            else{
                
                res=max(count,res);
                count=0;
                
            }
        }
        return max(res,count);
        
    }
};