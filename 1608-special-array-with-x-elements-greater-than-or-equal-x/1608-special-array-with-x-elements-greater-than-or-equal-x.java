class Solution {
    public int specialArray(int[] nums) {
        int[] prefix=new int[1001];
        for(int val:nums){
            prefix[val]++;
        }
        for(int i=1000;i>0;i--){
            prefix[i-1]+=prefix[i];
        }
        for(int i=0;i<=nums.length;i++){
            if(i==prefix[i]){
                return i;
                
            }
        }
        return -1;
        
    }
}