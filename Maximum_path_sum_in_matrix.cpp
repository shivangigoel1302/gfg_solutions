public:
    int maximumPath(int n, vector<vector<int>> Matrix)
    {
        // code here
        for(int i = n-2; i >=0 ; i--){
            for(int j = n-1; j>=0; j--){
                int a = INT_MIN;
                if(j-1 >= 0){
                    a = max(a,Matrix[i+1][j-1]);
                }
                if(j+1 < n){
                    a = max(a,Matrix[i+1][j+1]);
                }
                a = max(a,Matrix[i+1][j]);
                Matrix[i][j] += a;
            }
        }
        int maximum = INT_MIN;
        for(int i = 0 ; i < n; i++){
            maximum = max(maximum,Matrix[0][i]);
        }
        return maximum;
    }
