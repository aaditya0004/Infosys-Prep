// LeetCode 994

/* 
I use multi-source BFS. All initially rotten oranges are pushed into the queue. Each BFS level represents one minute. Fresh neighbors rot and are added to the queue. If fresh oranges remain at the end, I return -1
*/

/* 
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>> vis(n, vector<int>(m, 0));
        int cntFresh = 0;
        queue<pair<pair<int, int>, int>> q;
        
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 2){
                    q.push({{i, j}, 0});
                    vis[i][j] = 2;
                }
                else if(grid[i][j] == 1) cntFresh++;
            }
        }

        int time = 0;
        int cnt = 0;
        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        while(!q.empty()){
            auto [pos, t] = q.front();
            auto [r, c] = pos;
            time = max(time, t);
            q.pop();

            for(int i = 0; i < 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];

                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && vis[nrow][ncol] != 2 && grid[nrow][ncol] == 1){
                    cnt++;
                    vis[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, t+1});
                }
            }
        }

        if(cnt != cntFresh) return -1;
        
        return time;
    }
};
*/