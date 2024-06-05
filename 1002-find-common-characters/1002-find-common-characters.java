class Solution {
    public List<String> commonChars(String[] words) {
        int[] currentCount= new int[26];
        int[] commonCount =new int[26];
        List<String> result = new ArrayList<>();
        
        for(char c:words[0].toCharArray()){
            commonCount[c-'a']++;
        }
        
        for(int i=1;i<words.length;i++){
            Arrays.fill(currentCount,0);
            
            for(char c:words[i].toCharArray()){
                currentCount[c-'a']++;
            }
            
            for(int l=0;l<26;l++){
                commonCount[l]=Math.min(currentCount[l],commonCount[l]);
            }
        }
        
        for(int l=0;l<26;l++){
            for(int i=0;i<commonCount[l];i++){
                result.add(String.valueOf((char)(l + 'a')));
            }
        }
        return result;
    }
}