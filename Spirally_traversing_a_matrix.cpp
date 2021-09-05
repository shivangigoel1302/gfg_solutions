vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c)
    {
        // code here
        int m = 0,n=0;
        vector<int>ans;
        while(m < r && n < c){
            for(int i = n; i < c; i++){
                ans.push_back(matrix[m][i]);
            }
            m++;
            for(int i = m; i < r; i++){
                ans.push_back(matrix[i][c-1]);
            }
            c--;
            if(m < r){
                for(int i = c-1; i >= n; i--){
                    ans.push_back(matrix[r-1][i]);
                }
                r--;
            }
            if(n < c){
                for(int i = r-1; i >= m; i--){
                    ans.push_back(matrix[i][n]);
                }
                n++;
            }
        }
        return ans;
    }
