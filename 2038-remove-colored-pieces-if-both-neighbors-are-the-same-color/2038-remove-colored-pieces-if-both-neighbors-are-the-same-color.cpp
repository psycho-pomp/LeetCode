class Solution {
public:
    bool winnerOfGame(string s) {
        int length=s.size();
        if(length<=2){
            return false;
        }
        int aliceChances=0,bobChances=0;
        for(int i=1;i<length-1;i++){
            if(s[i-1]=='A' && s[i]=='A' && s[i+1]=='A'){
                aliceChances+=1;
            }
            else if(s[i-1]=='B' && s[i]=='B' && s[i+1]=='B'){
                bobChances+=1;
            }
        }
                    if(aliceChances<=bobChances){
                        return false;
                    }
                    return true;
                    
        
        
    }
};