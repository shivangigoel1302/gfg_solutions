public:
bool colorgraph(int src, vector<int>adj[],int v,vector<int>&color){
    color[src] = 1;
    queue<int>q;
    q.push(src);
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(auto nbr: adj[x]){
            if(color[nbr] == color[x]){
                return false;
            }
            else if(color[nbr] == -1){
                color[nbr] = 1-color[x];
                q.push(nbr);
            }
        }
    }
    return true;
}
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>color(V,-1);
	    for(int i = 0; i < V; i++){
	        if(color[i] == -1){
	            if(!colorgraph(i,adj,V,color)){
	                return false;
	            }
	        }
	    }
	    return true;
	}
