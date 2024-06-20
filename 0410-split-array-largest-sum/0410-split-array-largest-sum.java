class Solution {
    public boolean checkSubarray(int[] nums,int sum,int k){
        int size=1,total=0;
        for(int i=0;i<nums.length;i++){
            total+=nums[i];
            if(total>sum){
                total=nums[i];
                size+=1;
            }
            if(size>k){
                return false;
            }
            
        }
        return true;
    }
    public int splitArray(int[] nums, int k) {
        int start=Arrays.stream(nums).max().getAsInt();
        int end=Arrays.stream(nums).sum();
        while(start<end){
            int mid=start+(end-start)/2;
            //System.out.println(mid);
            if(checkSubarray(nums,mid,k)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
}