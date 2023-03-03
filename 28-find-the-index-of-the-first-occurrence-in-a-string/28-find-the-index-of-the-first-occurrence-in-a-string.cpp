class Solution {
public:
    int strStr(string haystack, string needle) {
        int j=0;
        for(int i=0;i<haystack.size();i++){
            //cout<<j<<endl;
            if(haystack[i]!=needle[j]){
                i-=j;
                j=0;
                continue;
            }
            else{
                j++;
                if(j==needle.size()){
                    return i+1-needle.size();
                }
                
            }
        }
        return -1;
        
    }
};