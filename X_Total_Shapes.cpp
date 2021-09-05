public:
    void removeadj(vector<vector<char>>&grid,int i, int j){
        if(i >= grid.size() || i < 0 || j < 0 || j >= grid[i].size() || grid[i][j] == 'O'){
            return;
        }
        grid[i][j] = 'O';
        removeadj(grid,i+1,j);
        removeadj(grid,i-1,j);
        removeadj(grid,i,j+1);
        removeadj(grid,i,j-1);
    }
    int xShape(vector<vector<char>>& grid) {
        int ans = 0;
        for(int i = 0 ; i < grid.size(); i++){
            for(int j = 0 ; j < grid[0].size(); j++){
                if(grid[i][j] == 'X'){
                    removeadj(grid,i,j);
                    ans++;
                }
            }
        }
        return ans;
    }
