class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int res=numBottles;
        int val=numBottles;
        while(val>=numExchange){
            res+=(int)(val/numExchange);
            val=(int)(val/numExchange)+(val%numExchange);
        }
        return res;
        
    }
}