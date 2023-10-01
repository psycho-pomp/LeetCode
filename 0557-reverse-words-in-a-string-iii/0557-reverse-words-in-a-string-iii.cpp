class Solution {
public:
    string reverseWords(string s) {
        int start=0;
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]==' '){
                //cout<<start<<" "<<i<<endl;
                reverse(s.begin()+start,s.begin()+i);
                start=i+1;
            }
        }
        reverse(s.begin()+start,s.begin()+i);
        return s;
        
    }
};