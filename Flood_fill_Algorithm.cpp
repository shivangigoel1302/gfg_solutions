public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // Code here
        queue<pair<int,int>>q;
        int xdir[4] ={0,0,1,-1};
        int ydir[4] ={1,-1,0,0};
        int m = image.size();
        int n = image[0].size();
        q.push({sr,sc});
        vector<vector<bool>>visited(m,vector<bool>(n,false));
        while(!q.empty()){
            auto x = q.front();
            q.pop();
            visited[x.first][x.second] = true;

            int col = image[x.first][x.second];
            image[x.first][x.second] = newColor;
            for(int i = 0 ; i < 4 ; i++){
                int nr = x.first +xdir[i];
                int nc = x.second +ydir[i];
                if(nr >=0 && nr < m && nc >=0 && nc < n && image[nr][nc] == col && !visited[nr][nc]){
                    q.push({nr,nc});
                }
            }
        }
        return image;
    }
