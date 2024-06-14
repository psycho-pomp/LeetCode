class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int res=0;
        //cout<<nums[0]<<",";
        for(int i=1;i<nums.size();i++){
            if(nums[i]<=nums[i-1]){
                
                res+=(nums[i-1]+1-nums[i]);
                nums[i]=nums[i-1]+1;
                //cout<<nums[i]<<",";
            }
        }
        //cout<<endl;
        return res;
        
    }
};