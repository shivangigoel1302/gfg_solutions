public:
   int xdir[8] = {-1,-2,-2,-1,1,2,2,1};
	    int ydir[8] = {2,1,-1,-2,-2,-1,1,2};

	int minStepToReachTarget(vector<int>&KnightPos, vector<int>&TargetPos, int N){
	    // Code here

	    int ix = N - KnightPos[1];
	    int iy = KnightPos[0]-1;
	    int tx = N-TargetPos[1];
	    int ty = TargetPos[0] - 1;

	    vector<vector<int>>grid(N,vector<int>(N,0));
	    grid[ix][iy] = 1;
	    queue<pair<int,int>>q;
	    q.push({ix,iy});
	    while(!q.empty()){
	        auto x = q.front();
	        q.pop();
	        if(x.first == tx && x.second == ty){
	            return grid[tx][ty] -1;
	        }
	        for(int i = 0 ; i < 8 ; i++){
	            int nr = x.first + xdir[i];
	            int nc = x.second + ydir[i];
	            if(nr < N && nr >=0 && nc <N && nc >=0 && grid[nr][nc] ==0){
	                grid[nr][nc] = grid[x.first][x.second]+1;
	                q.push({nr,nc});
	            }
	        }
	   }
	    return 0;
	}
