class Solution {
public:
    int integerBreak(int n) {
        if(n==2) return 1;
        if(n==3) return 2;
        if(n==4) return 4;
        int maxValue=0;
        int value=n;
        int mult1=1;
        while(value>=3){
            mult1*=3;
            value-=3;
            maxValue=max(mult1*value,maxValue);    
        }
        return maxValue;
    }
};