class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n=nums.size();
        int target=accumulate(nums.begin(),nums.end(),0)-x;
        if(target<0) return -1;
        if(target==0) return n;
        int currSum=0,start=0;
        int ans=INT_MAX;
        for(int i=0;i<n;){
            currSum+=nums[i];
            i++;
            while(currSum>target && start<n){
                currSum-=nums[start];
                start++;
            }
            if(currSum==target){
                ans=min(ans,(start+n-i));
            }
        }
        if(ans==INT_MAX) return -1;
        return ans;
    }
};