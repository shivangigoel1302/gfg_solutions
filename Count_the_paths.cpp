public:
  void path_counter(int src, int dst, int& path_count, vector<int>adj[])
{
    // If we've reached the destination, then increment
    // count...
    if (src == dst) {
        path_count++;
    }
    // ...otherwise recurse into all neighbours...
    else {
        for (auto neighbour : adj[src]) {
            path_counter(neighbour, dst, path_count,adj);
        }
    }
}
    void addedge(vector<int>adj[],int u,int v){
        adj[u].push_back(v);
    }
	int possible_paths(vector<vector<int>>edges, int n, int s, int d){
	    int ans = 0;

	    int v = n;
	    vector<int>adj[v];
	    for(int i = 0 ; i< edges.size(); i++){
	        addedge(adj,edges[i][0],edges[i][1]);
	    }
	    int path_count = 0;
        path_counter(s, d, path_count,adj);
        return path_count;
	}
