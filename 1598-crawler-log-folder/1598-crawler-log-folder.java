class Solution {
    public int minOperations(String[] logs) {
        int res=0;
        for(String val:logs){
            if(val.equals("../")){
                if(res>=1){
                    res-=1;
                }
            }
            else if(val.equals("./")){
                continue;
            }
            else{
                res+=1;
            }
        }
        return res;
        
    }
}