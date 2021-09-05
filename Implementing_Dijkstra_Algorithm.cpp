	public:
	/*  Function to implement Dijkstra
    *   adj: vector of vectors which represents the graph
    *   S: source vertex to start traversing graph with
    *   V: number of vertices
    */
    vector <int> dijkstra(int V, vector<vector<int>> adj[], int S) {
        // Code here
        vector<int>dist(V,INT_MAX);
        vector<bool>visited(V,false);
        dist[S] = 0;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        pq.push({0,S});
        while(!pq.empty()){
            auto f = pq.top();
            visited[f.second] = true;
            pq.pop();
            for(auto nbr: adj[f.second]){
                int child = nbr[0];
                int weight = nbr[1];
                if(!visited[child]&& weight + dist[f.second] < dist[child]){
                    dist[child] = weight + dist[f.second];
                    pq.push({dist[child],child});
                }
            }
        }
        return dist;
    }
