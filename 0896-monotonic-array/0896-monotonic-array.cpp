class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool inc=nums[0]<=nums[nums.size()-1];
      for(int i=0;i<nums.size()-1;i++)
      {
        if(inc && nums[i]>nums[i+1])return 0;
        else if(!inc && nums[i]<nums[i+1])return 0;
      }
      return 1;  
    }
};