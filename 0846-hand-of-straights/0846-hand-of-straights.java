class Solution {
    public boolean isNStraightHand(int[] hand, int groupSize) {
        int size=hand.length;
        if(size%groupSize!=0) return false;
        Map<Integer,Integer> count = new TreeMap<Integer,Integer>();
        
        for(int value:hand){
            count.put(value, count.getOrDefault(value, 0) + 1);
        }
        
        for(Integer keyValue:count.keySet()){
            while(count.get(keyValue)>0){
                for(int i=0;i<groupSize;i++){
                    if(count.getOrDefault(keyValue+i,0)==0){
                        return false;
                    }
                    else{
                        count.put(keyValue+i, count.get(keyValue+i)-1);
                    }
                }
            }
        }
        return true;
        
    }
}