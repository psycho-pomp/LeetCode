class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int index=1;
        for(int i=1;i<nums.size();i++){
            if(nums[index-1]!=nums[i]){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};