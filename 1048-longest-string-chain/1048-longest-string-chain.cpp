class Solution {
public:
    static bool cmp(const string w1,const string w2){
        return w1.size()<w2.size();
    }
    int longestStrChain(vector<string>& words) {
        int ans=0;
        sort(words.begin(),words.end(),cmp);
        unordered_map<string,int>ump;
        for(string word:words){
            int curr_long=0;
            for(int i=0;i<word.size();i++){
                string sub=word;
                sub.erase(i,1);
                curr_long=max(curr_long,ump[sub]+1);
            }
            ump[word]=curr_long;
            ans=max(curr_long,ans);
            
        }
        return ans;
        
    }
};