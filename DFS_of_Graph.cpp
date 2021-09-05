public:
void dfshelper(vector<bool>&visited,vector<int>&ans,vector<int>adj[],int src){
    ans.push_back(src);
    visited[src] = true;
    for(auto nbr: adj[src]){
        if(!visited[nbr]){
            dfshelper(visited,ans,adj,nbr);
        }
    }
    return;
}
	vector<int>dfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<int>ans;
	    vector<bool>visited(V,false);
	    for(int i = 0 ; i < V; i++){
	        if(!visited[i]){
	            dfshelper(visited,ans,adj,i);
	        }
	    }
	    return ans;
	}
