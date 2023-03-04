class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int m=0,j=1,i=0;
        while(j<prices.size()){
            if(prices[j]-prices[i]>0){
                m=max(m,prices[j]-prices[i]);
                j++;
            }
            else{
                i=j;
                j++;
            }
            
        }
        return m;
    }
};