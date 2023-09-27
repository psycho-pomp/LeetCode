class Solution {
public:
    string decodeAtIndex(string s, int k) {
        string currTape;
        long long currStringLen=0;
        int i=0;
        while(currStringLen<k){
            if(s[i]-'0'<=9 && s[i]-'0'>0){
                currStringLen*=s[i]-'0';
            }
            else{
                currStringLen+=1; 
            }
            i++;
        }
        for(int j=i-1;j>=0;j--){
            if (isdigit(s[j])) {
                currStringLen /= s[j] - '0';
                k %= currStringLen;
            } else {
                if (k == 0 || k == currStringLen) {
                    return std::string(1, s[j]);  // Convert char to std::string
                }
                currStringLen--;
            }
        }
        return "";
        
            
        
    }
};