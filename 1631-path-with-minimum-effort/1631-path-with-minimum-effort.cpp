class Solution {
public:
    std::vector<vector<int>> directions = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
    int minimumEffortPath(vector<vector<int>>& heights) {
        vector<vector<int>> distance_table(heights.size(), vector<int>(heights[0].size(), INT32_MAX));
        distance_table[0][0] = 0;

        auto cmp = [&](const pair<int, int>& fst, const pair<int, int>& snd) {
          return distance_table[fst.first][fst.second] > distance_table[snd.first][snd.second];
        };

        std::priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> pq(cmp);
        pq.push(make_pair(0, 0));

        while (!pq.empty()) {
          auto top = pq.top();
          int distance = distance_table[top.first][top.second];
          pq.pop();

          for (auto& direction : directions) {
            int i = top.first + direction[0];
            int j = top.second + direction[1];

            if (i < 0 || j < 0 || i >= heights.size() || j >= heights[0].size()) {
              continue;
            }

            int effort = max(distance, abs(heights[top.first][top.second] - heights[i][j]));

            if (effort < distance_table[i][j]) {
              distance_table[i][j] = effort;
              pq.push(make_pair(i, j));
            }

          }
        }

        return distance_table.back().back();
    }
};