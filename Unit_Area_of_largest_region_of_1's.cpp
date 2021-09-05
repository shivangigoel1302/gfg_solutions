public:
    int countone(vector<vector<int>>&grid,int i,int j){
        if(i < 0 || i >= grid.size() || j <0 || j >= grid[0].size() || grid[i][j] == 0){
            return 0;
        }
        int a = 0;
        grid[i][j] = 0;
        a += countone(grid,i+1,j);
        a += countone(grid,i+1,j+1);
        a += countone(grid,i,j+1);
        a += countone(grid,i-1,j+1);
        a += countone(grid,i-1,j);
        a += countone(grid,i-1,j-1);
        a += countone(grid,i,j-1);
        a += countone(grid,i+1,j-1);
        return a+1;
    }
    int findMaxArea(vector<vector<int>>& grid) {
        // Code here
        int ans = 0;
        int m = grid.size();
        int n = grid[0].size();
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(grid[i][j] == 1){
                    ans = max(ans,countone(grid,i,j));
                }
            }
        }
        return ans;
    }
