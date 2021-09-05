public:
void fill(vector<vector<char>>&mat,int i, int j){
    if(i >= mat.size() || i < 0 || j <0 || j >=mat[0].size() || mat[i][j] != '-'){
        return;
    }
    mat[i][j] = 'O';
    fill(mat,i+1,j);
    fill(mat,i,j+1);
    fill(mat,i,j-1);
    fill(mat,i-1,j);
    return;
}
    vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
    {
        // code here
        for(int i = 0 ; i < n; i++){
            for(int j = 0 ; j < m ; j++){
                if(mat[i][j] == 'O'){
                    mat[i][j] = '-';
                }
            }
        }
        for(int i = 0 ;i < n ; i++){
            if(mat[i][0] == '-'){
                fill(mat,i,0);
            }
            if(mat[i][m-1] == '-'){
                fill(mat,i,m-1);
            }
        }
        for(int i = 0 ; i < m ; i++){
            if(mat[0][i] == '-'){
                fill(mat,0,i);
            }
            if(mat[n-1][i] == '-' ){
                fill(mat,n-1,i);
            }
        }
        for(int i = 1; i < n-1; i++){
            for(int j = 1; j <m-1; j++){
                if(mat[i][j] == '-'){
                    mat[i][j] = 'X';
                }
            }
        }
        return mat;
    }
