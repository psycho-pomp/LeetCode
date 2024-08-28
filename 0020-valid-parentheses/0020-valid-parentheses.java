class Solution {
    public boolean isValid(String s) {
        Stack<Character> st = new Stack<>();
        for(int i=0;i<s.length();i++){
            
            if(s.charAt(i)==')' || s.charAt(i)==']' || s.charAt(i)=='}'){
                if(!st.empty()){
                    Character top=st.pop();
                    if((top== '(' && s.charAt(i)==')') || (top== '{' && s.charAt(i)=='}')
                      || (top== '[' && s.charAt(i)==']')){
                        continue;
                    }
                    else{
                        return false;
                    }
                }
                else{
                    return false;
                }
            }
            else{
                st.push(s.charAt(i));
            }
        }
        return st.empty();
    }
}