class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n=nums.size();
        int start=0,end=n-1;
        vector<int> res(n);
        while(start<=end){
            if(nums[start]*nums[start]<nums[end]*nums[end]){
                res[end-start]=nums[end]*nums[end];
                end--;
            }
            else{
                res[end-start]=nums[start]*nums[start];
                start++; 
            }
        }
        return res;
    }
};