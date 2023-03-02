class Solution {
public:
    bool checkRecord(string s) {
    
        int cnt_A = 0, cnt_L = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'A')
                cnt_A++;
            else if (s[i] == 'L' && s[i + 1] == 'L') 
                cnt_L++;
            else
                cnt_L = 0;
            if (cnt_A > 1 || cnt_L > 1)
                return false;
        }
        return true;
    }
        
};