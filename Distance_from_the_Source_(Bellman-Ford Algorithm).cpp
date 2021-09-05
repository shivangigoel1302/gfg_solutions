public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> bellman_ford(int V, vector<vector<int>> adj, int S) {
        // Code here
        int INF = 100000000;
        vector<int>dist(V,INF);
        dist[S] = 0;
        for(int i = 0; i < V-1; i++){
            for(int j = 0 ; j < adj.size(); j++){
                if(dist[adj[j][0]] != INF && adj[j][2] + dist[adj[j][0]] < dist[adj[j][1]]){
                    dist[adj[j][1]] = adj[j][2] + dist[adj[j][0]] ;
                }
            }
        }
        return dist;
    }
