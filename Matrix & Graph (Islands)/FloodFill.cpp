// LeetCode 733

/* 
class Solution {
public:
    void bfs(int row, int col, vector<vector<int>>& image, int oldcolor, int color){
        int n = image.size();
        int m = image[0].size();

        int drow[] = {-1, 0, 1, 0};
        int dcol[] = {0, 1, 0, -1};

        queue<pair<int, int>> q;
        q.push({row, col});
        image[row][col] = color;

        while(!q.empty()){
            int r = q.front().first;
            int c = q.front().second;
            q.pop();
            for(int i = 0; i < 4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m && image[nrow][ncol] == oldcolor){
                    image[nrow][ncol] = color;
                    q.push({nrow, ncol});
                }
            }
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int c = image[sr][sc];
        if(image[sr][sc] == color) return image;

        bfs(sr, sc, image, c, color);
        return image;
    }
};
*/