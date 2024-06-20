class Solution {
    public boolean condition(int[] nums,int threshold,int mid){
        int count=0;
        for(int value:nums){
            count+=(int)(value/mid);
            if(value%mid!=0) count++;
        }
        return count<=threshold;
    }
    public int smallestDivisor(int[] nums, int threshold) {
        
        int start=1,end=Arrays.stream(nums).max().getAsInt();
        
        while(start<end){
            int mid=start+ (end-start)/2;
            if(condition(nums,threshold,mid)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
        
    }
}