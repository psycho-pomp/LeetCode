class Solution {
public:
    int shortestPathLength(vector<vector<int>>& graph) {
        
        int n = graph.size();

        // Use bitmask to track visited nodes
        vector<vector<bool>> visited(n, vector<bool>(1 << n, false));
        queue<pair<int, int>> q; // {current node, bitmask}
        
        // Initialize the queue with all nodes as starting points
        for (int i = 0; i < n; ++i) {
            q.push({i, 1 << i});
            visited[i][1 << i] = true;
        }
        
        int target = (1 << n) - 1; // Target bitmask with all nodes visited
        int steps = 0;

        while (!q.empty()) {
            int qSize = q.size();
            
            for (int i = 0; i < qSize; ++i) {
                int currNode = q.front().first;
                int currMask = q.front().second;
                q.pop();
                
                if (currMask == target) {
                    return steps; // All nodes have been visited
                }
                
                // Explore neighboring nodes
                for (int neighbor : graph[currNode]) {
                    int nextMask = currMask | (1 << neighbor);
                    if (!visited[neighbor][nextMask]) {
                        q.push({neighbor, nextMask});
                        visited[neighbor][nextMask] = true;
                    }
                }
            }
            
            steps++;
        }
        
        return -1;
        
    }
};