class Solution {
    public boolean feasible(int[] piles,int k,int h){
        int hour=1,total=0;
        for(int i=0;i<piles.length;i++){
            total+=(int)piles[i]/k;
            if(piles[i]%k!=0) total++;
            if(total>h){
                return false;
            }
        }
        return true;
    }
    public int minEatingSpeed(int[] piles, int h) {
        
        int start=1,end=Arrays.stream(piles).max().getAsInt();
        while(start<end){
            int mid=start+(end-start)/2;
            if(feasible(piles,mid,h)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
}