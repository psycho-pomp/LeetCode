class Solution {
    public boolean feasible(int[] weights,int capacity,int days){
        int total=0,d=1;
        for(int weight:weights){
            total+=weight;
            if(total>capacity){
                total=weight;
                d++;
                if(d>days){
                    return false;
                }
            }
            
        }
        return true;
        
    }
    public int shipWithinDays(int[] weights, int days) {
        
        int start=Arrays.stream(weights).max().getAsInt();
        int end=Arrays.stream(weights).sum();
        while(start<end){
            int mid=start+(end-start)/2;
            boolean check=feasible(weights,mid,days);
            if(check){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
}