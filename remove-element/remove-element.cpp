class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index=0;
        for(auto value:nums){
            if(value!=val){
                nums[index]=value;
                index++;
            }
        }
        return index;
        
    }
};