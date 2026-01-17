// LeetCode 542

/* 
If you see:

“distance to nearest X”
“minimum steps”
“grid”
“many starting points”

👉 Multi-source BFS
*/

/* 
class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> dist(n, vector<int> (m, -1));
        queue<pair<int, int>> q;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 0){
                    dist[i][j] = 0;
                    q.push({i, j});
                } 
            }
        }

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        while(!q.empty()){
            auto [r, c] = q.front();
            q.pop();

            for(int i = 0; i < 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && dist[nrow][ncol] == -1){
                    dist[nrow][ncol] = dist[r][c] + 1;
                    q.push({nrow, ncol});
                }
            }
        }
        return dist;
    }
};
*/