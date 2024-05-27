class Solution {
    public int compareVersion(String version1, String version2) {
        int i=0,j=0;
        String[] version1List=version1.split("\\.");
        String[] version2List=version2.split("\\.");
        
        while(i<version1List.length && j<version2List.length){
            if(Integer.parseInt(version1List[i])
               < Integer.parseInt(version2List[j])){
                return -1;
            }
            else if(Integer.parseInt(version1List[i])
               > Integer.parseInt(version2List[j])){
                return 1;
            }
            i++;
            j++; 
        }
        
       while(i<version1List.length){
           if(Integer.parseInt(version1List[i])!=0){
               return 1;
           }
           i++;
       } 
        while(j<version2List.length){
           if(Integer.parseInt(version2List[j])!=0){
               return -1;
           }
            j++;
       }
        return 0;
    }
}