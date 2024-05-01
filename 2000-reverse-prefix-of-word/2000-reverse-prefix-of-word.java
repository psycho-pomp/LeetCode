class Solution {
    public String reversePrefix(String word, char ch) {
        int j= word.indexOf(ch);
        char[] charArray = word.toCharArray();
        for(int i=0;i<=j;i++){
            char temp = charArray[i];
            charArray[i] = charArray[j];
            charArray[j] = temp;
            j--;
        }
        String swappedString = new String(charArray);
        return swappedString;
    }
}