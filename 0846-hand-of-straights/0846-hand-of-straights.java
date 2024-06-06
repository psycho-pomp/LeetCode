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
                // if(count.getOrDefault(keyValue+1,0)==0 || count.getOrDefault(keyValue+2,0)==0){
                //     //System.out.println("Value of keyValue: " + keyValue);
                //     return false;
                // }
                // else{
                //     System.out.println("Value of keyValue: " + keyValue);
                //     count.put(keyValue, count.get(keyValue)-1);
                //     System.out.println("Value of 2: " + count.get(keyValue+1));
                //     count.put(keyValue+1, count.get(keyValue+1)-1);
                //     System.out.println("Value of 2: " + count.get(keyValue+1));
                //     count.put(keyValue+2, count.get(keyValue+2)-1);
                // }
            }
        }
        return true;
        
    }
}