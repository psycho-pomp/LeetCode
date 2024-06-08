class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int> us;
        nums[0]%=k;
        
        us[nums[0]]=0;
        us[0]=-1;
        for(int i=1;i<n;i++){
                nums[i]+=nums[i-1];
                nums[i]%=k;
            
                if(us.find(nums[i])!=us.end()){
                    if(i-us[nums[i]]>1)
                    return true;
                }
                else{
                    us[nums[i]]=i;
                }
            
        }
        return false;
        
    }
};