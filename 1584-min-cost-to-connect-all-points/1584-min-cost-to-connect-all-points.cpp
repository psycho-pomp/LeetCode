class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
        vector<int> vis(n, 0);
        int ans = 0;
        pq.push({0, 0});

        while(!pq.empty()){
            pair<int, int> temp = pq.top();
            pq.pop();
            int wt = temp.first;
            int index = temp.second;

            if (vis[index] == 1)
                continue;

            vis[index] = 1;
            ans += wt;

            for (int i=0;i<n;i++){
                if(i == index || vis[i] == 1)
                    continue;
                else{
                    int x1 = points[index][0];
                    int y1 = points[index][1];

                    int x2 = points[i][0];
                    int y2 = points[i][1];

                    int dist = abs(x1-x2) + abs(y1-y2);
                    pq.push({dist, i});
                }
            }
        }
        return ans;
    }
};