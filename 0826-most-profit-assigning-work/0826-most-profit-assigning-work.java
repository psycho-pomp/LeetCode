class Solution {
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        int max_ability=Arrays.stream(worker).max().getAsInt(); 
        int[] hash=new int[max_ability+1];
        for(int i=0;i<difficulty.length;i++){
            if(difficulty[i]<=max_ability){
                hash[difficulty[i]]=Math.max(hash[difficulty[i]],profit[i]);
            }
        }
        //System.out.println(max_ability);
        for(int i=1;i<max_ability+1;i++){
            hash[i]=Math.max(hash[i],hash[i-1]);
            //System.out.print(hash[i]+",");
        }
        //System.out.println();
        int result=0;
        for(int value:worker){
            result+=hash[value];
        }
        return result;
        
    }
}