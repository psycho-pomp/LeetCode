class Solution {
    public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
        int n=customers.length;
        int maximumWindow=0,maxIdx=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)
                maximumWindow+=customers[i];
        }
        int currWindow=maximumWindow;
        for(int i=1;i<=n-minutes;i++){
            //System.out.println(i+","+customers[i-1]);
            if(grumpy[i-1]==1){
                currWindow-=customers[i-1];
            }
            //System.out.println(i+","+currWindow);
            if(grumpy[i+minutes-1]==1){
                currWindow+=customers[i+minutes-1];   
            }
            //System.out.println(i+","+currWindow);
            if(currWindow>maximumWindow){
                    maxIdx=i;
                    maximumWindow=currWindow;
            }
        }
        //System.out.println(maxIdx+","+maximumWindow);
        int result=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                result+=customers[i];
            }
        }
        return result+maximumWindow;
    }
}