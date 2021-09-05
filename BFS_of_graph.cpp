public:
	vector<int>bfsOfGraph(int V, vector<int> adj[]){
	    // Code here
	    vector<int>ans;
	    queue<int>q;
	    vector<bool>visited(V,false);
	    q.push(0);
	    while(!q.empty()){
	        int a = q.front();
	        ans.push_back(a);
	        q.pop();
	        visited[a] = true;
	        for(auto nbr : adj[a]){
	            if(!visited[nbr]){
	                q.push(nbr);
	                visited[nbr] = true;
	            }
	        }
	    }
	    return ans;
	}
