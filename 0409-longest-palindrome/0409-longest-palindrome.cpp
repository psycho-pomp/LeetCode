class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int>ump;
        for(char c:s){
            ump[c]++;
        }
        int odd=0;
        for(auto i=ump.begin();i!=ump.end();i++){
            if(i->second%2==1){
                odd+=1;
            }
        }
        if(odd==0) return s.size();
        return s.size()-odd+1;
        
    }
};