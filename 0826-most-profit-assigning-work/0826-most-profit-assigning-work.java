class Solution {
    public int maxProfitAssignment(int[] difficulty, int[] profit, int[] worker) {
        int max_difficulty=Arrays.stream(difficulty).max().getAsInt(); 
        int[] hash=new int[max_difficulty+1];
        for(int i=0;i<difficulty.length;i++){
            hash[difficulty[i]]=Math.max(hash[difficulty[i]],profit[i]);
        }
        //System.out.println(max_difficulty);
        for(int i=1;i<max_difficulty+1;i++){
            hash[i]=Math.max(hash[i],hash[i-1]);
            //System.out.print(hash[i]+",");
        }
        //System.out.println();
        int result=0;
        for(int value:worker){
            System.out.print(value+"-");
            if(value<=max_difficulty){
                result+=hash[value];
                //System.out.println(hash[value]);
            }
            else{
                result+=hash[max_difficulty];
                //System.out.println(hash[max_difficulty]);
            }
        }
        return result;
        
    }
}