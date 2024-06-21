class Solution {
    public int maxSatisfied(int[] customers, int[] grumpy, int minutes) {
        int n=customers.length;
        int maximumWindow=0;
        for(int i=0;i<minutes;i++){
            if(grumpy[i]==1)
                maximumWindow+=customers[i];
        }
        int currWindow=maximumWindow;
        for(int i=1;i<=n-minutes;i++){
            if(grumpy[i-1]==1){
                currWindow-=customers[i-1];
            }
            if(grumpy[i+minutes-1]==1){
                currWindow+=customers[i+minutes-1];   
            }
            if(currWindow>maximumWindow){
                    maximumWindow=currWindow;
            }
        }
        int result=0;
        for(int i=0;i<n;i++){
            if(grumpy[i]==0){
                result+=customers[i];
            }
        }
        return result+maximumWindow;
    }
}