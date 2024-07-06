class Solution {
    public int passThePillow(int n, int time) {
        int fullPassCount=time/(n-1);
        int remPass=time%(n-1);
        
        if(fullPassCount%2!=0){
            return n-remPass;
        }
        else{
            return remPass+1;
        }
        
    }
}