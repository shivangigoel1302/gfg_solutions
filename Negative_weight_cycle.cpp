public:
	int isNegativeWeightCycle(int n, vector<vector<int>>edges){
	    // Code here
	    vector<int>dist(n,INT_MAX);
	    dist[0] = 0;
	    for(int i = 0 ; i < n-1; i++){
	        for(int j = 0 ; j < edges.size(); j++){
	            if(dist[edges[j][0]] != INT_MAX && dist[edges[j][0]] + edges[j][2] < dist[edges[j][1]]){
	                dist[edges[j][1]] =   dist[edges[j][0]] + edges[j][2];
	            }
	        }
	    }

	    for(int j = 0 ; j < edges.size(); j++){
            if(dist[edges[j][0]] != INT_MAX && dist[edges[j][0]] + edges[j][2] < dist[edges[j][1]]){
                return 1;
            }
        }
        return 0;
	}
