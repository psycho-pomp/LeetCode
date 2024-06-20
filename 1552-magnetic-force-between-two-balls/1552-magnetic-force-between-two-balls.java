class Solution {
    
    public boolean accomodate(int[] position,int force,int m){
        int x=position[0],count=1;
        for(int i=1;i<position.length;i++){
            if(position[i]-x>=force){
                x=position[i];
                count++;
            }
            if(count==m){
                return true;
            }
        }
        return false;
    }
    public int maxDistance(int[] position, int m) {
        Arrays.sort(position);
        int n=position.length;
        int start = 1;
        int end = (int) Math.ceil(position[n - 1] / (m - 1.0));
        while(start<end){
            int mid=start+(end-start)/2;
            
            if(!accomodate(position,mid,m)){
                end=mid;
            }
            else{
                start=mid+1;
            }
        }
        return start-1;
        
    }
}