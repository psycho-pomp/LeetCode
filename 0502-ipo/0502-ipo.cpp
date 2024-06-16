class Solution {
public:
   int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
       int n=capital.size();
       map<int,vector<int>> capitalToProfitList;
       for(int i=0;i<n;i++){
           capitalToProfitList[capital[i]].push_back(profits[i]);
       }
       auto i=capitalToProfitList.begin();
       priority_queue<int> maxHeap;
       while(k--){
           while(i!=capitalToProfitList.end() && i->first<=w){
               for(int value:i->second){
                   maxHeap.push(value);
               }
               i++;
           }
           if(maxHeap.empty()) return w;
           w+=maxHeap.top();
           maxHeap.pop();
           
       }
       return w;
       
   }
};