class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int idx=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                if(idx<i){
                    swap(nums[i],nums[idx]);
                }
                idx++;
            }
        }
        return idx;
        
    }
};