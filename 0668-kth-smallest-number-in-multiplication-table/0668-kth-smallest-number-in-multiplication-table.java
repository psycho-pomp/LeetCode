class Solution {
    public boolean check(int m,int n,int k,int val){
        int count=0;
        for(int i=1;i<=m;i++){
            count+=Math.min((int)val/i,n);
            //if(count==0) break;  
        }
        return count>=k;
    }
    public int findKthNumber(int m, int n, int k) {
        
        int start=1,end=m*n;
        while(start<end){
            int mid=start+(end-start)/2;
            if(check(m,n,k,mid)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start;
        
    }
}