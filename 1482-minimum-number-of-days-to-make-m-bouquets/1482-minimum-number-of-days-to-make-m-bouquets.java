class Solution {
    public int getNoOfBouqets(int[] bloomDay,int mid,int k){
        int count=0,noOfBouqets=0;
        for(int i=0;i<bloomDay.length;i++){
            if(bloomDay[i]<=mid){
                count++;
            }
            else{
                count=0;
            }
            if(count==k){
                noOfBouqets++;
                count=0;
            }
            
        }
        return noOfBouqets;
    }
    public int minDays(int[] bloomDay, int m, int k) {
        
        int start=Arrays.stream(bloomDay).min().getAsInt(),end=Arrays.stream(bloomDay).max().getAsInt();
        int res=-1;
        while(start<=end){
            int mid=(start+end)/2;
            int noOfBouqets=getNoOfBouqets(bloomDay,mid,k);
            if(noOfBouqets>=m){
                end=mid-1;
                res=mid;
            }
            else{
                start=mid+1;
            }
        }
        return res;
        
    }
}