class Solution {
    public int mySqrt(int x) {
        if(x==0) return 0;
        if(x==1) return 1;
        int start=1,end=x;
        while(start<end){
            int mid=start+(end-start)/2;
            // if(x==mid*mid){
            //     return mid;
            // }
            if((long)mid*mid>(long)x){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start-1;
    }
}