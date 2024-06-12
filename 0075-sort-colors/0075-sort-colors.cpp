class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero=0,two=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0 && zero<=i){
                swap(nums[i],nums[zero]);
                zero++;
            }
            else if(nums[i]==2 && two>=i){
                swap(nums[i],nums[two]);
                two--;
                i--;
                
            }
        }
        
        
    }
};