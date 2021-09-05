//kruskal implementation but showing tle
	public:
	// Function to construct and print MST for
    // a graph represented using adjacency
    // list representation, with V vertices.
    int getparent(vector<int>parent,int val){
        if(parent[val] == val){
            return val;
        }
        return getparent(parent,parent[val]);
    }
    int spanningTree(int V, vector<vector<int>> adj[]) {
        // code here
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        for(int i = 0 ; i < V; i++){
           for(auto nbr: adj[i]){
               pq.push({nbr[1],{i,nbr[0]}});
           }
        }
        vector<int>parent(V);
        for(int i = 0 ; i < V; i++){
            parent[i] = i;
        }
        int ans = 0;
        while(!pq.empty()){
            auto f = pq.top();
            pq.pop();
            int srcparent = getparent(parent,f.second.first);
            int destparent = getparent(parent,f.second.second);
            if(srcparent != destparent){
                ans += f.first;
                parent[srcparent] = destparent;
            }
        }
        return ans;
    }
