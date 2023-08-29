class Solution {
public:
    int bestClosingTime(string customers) {
        int closingTime=0;
        int minPenalty=0;
        for(auto cust:customers){
            if(cust=='Y'){
                minPenalty+=1;
            }
        }
        
        cout<<minPenalty<<endl;
        int currPenalty=minPenalty;
        for(int i=0;i<customers.size();i++){
            if(customers[i]=='Y'){
                currPenalty-=1;
            }
            else{
                currPenalty+=1;
            }
            if(currPenalty<minPenalty){
                minPenalty=currPenalty;
                closingTime=i+1;
            }
            cout<<currPenalty<<endl;
        }
        return closingTime;
    }
};