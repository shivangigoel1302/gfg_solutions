public:
int dfhelper(vector<bool>&visited, vector<int>&degree,vector<int>adj[],int src){
    visited[src] = true;
    for(auto nbr: adj[src]){
        if(!visited[nbr]){
            int temp = dfhelper(visited,degree,adj,nbr);
            degree[src] += temp;
        }
    }
    degree[src] += 1;
    return degree[src];
}
	int findMotherVertex(int V, vector<int>adj[]){
	    // Code here
	    vector<bool>visited(V,false);
	    vector<int>degree(V,0);
	    for(int i  = 0  ;i < V; i++){
	        if(!visited[i]){
	            dfhelper(visited,degree,adj,i);
	        }
	    }
	    for(int i = 0 ; i < V; i++){
	        if(degree[i] == V){
	            return i;
	        }
	    }
	    return -1;
	}
