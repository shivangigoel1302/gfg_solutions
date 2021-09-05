public:
	void shortest_distance(vector<vector<int>>&matrix){
	    // Code here
	    int m = matrix.size();
	    int n = matrix[0].size();
	    vector<vector<int>>grid(m,vector<int>(n));

	    for(int k = 0 ; k< m ; k++){
	        for(int i = 0; i < m ; i++){
	            for(int j = 0 ; j < n ; j++){
	                if(matrix[i][k] != -1 && matrix[k][j] != -1 && matrix[i][j] > matrix[i][k] + matrix[k][j]){
	                    matrix[i][j] = matrix[i][k] + matrix[k][j];
	                }
	            }
	        }
	    }

	}
