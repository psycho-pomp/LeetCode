class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();){
            if(nums[i]>=0){
                nums[i]*=nums[i];
                i++;
                
            }
            else{
                int j=i;
                while(j+1<nums.size() && -nums[j]>nums[j+1] ){
                    swap(nums[j],nums[j+1]);
                    j++;
                }
                //cout<<j<<",";
                nums[j]*=-1;
                
            }
            
        }
        return nums;
        
    }
};