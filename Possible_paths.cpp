public:
	int MinimumWalk(vector<vector<int>>&graph, int u, int v, int k){
	    // Code here
	   // cout<<k<<"- "<<u<<" "<<v<<endl;
	   int count[graph.size()][graph.size()][k+1];
	   for(int e= 0 ; e <= k ; e++){
	       for(int i = 0 ; i < graph.size(); i++){
	           for(int j = 0 ; j < graph.size(); j++){
	               count[i][j][e] = 0;
	               if(e == 0 && i == j){
	                   count[i][j][e] = 1;
	               }
	               if(e == 1 && graph[i][j]){
	                   count[i][j][e] = 1;
	               }
	               if(e > 1){
	                   for(int a = 0 ; a < graph.size(); a++){
	                       if(graph[i][a]){
	                           count[i][j][e] += count[a][j][e-1];
	                       }
	                   }
	               }
	           }
	       }
	   }
	   return count[u][v][k];

	}
