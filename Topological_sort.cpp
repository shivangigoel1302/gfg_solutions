public:
	vector<int> topoSort(int V, vector<int> adj[]) {
	    // code here
	    vector<int>indegree(V,0);
	    queue<int>q;
	    vector<int>ans;
	    vector<bool>visited(V,false);
	    for(int i = 0 ; i < V; i++){
	        for(auto nbr: adj[i]){
	            indegree[nbr]++;
	        }
	    }
	    for(int i = 0 ; i < V; i++){
	        if(indegree[i] == 0){
	            q.push(i);
	        }
	    }
	    while(!q.empty()){
	        int x = q.front();
	        q.pop();
	        ans.push_back(x);
	        visited[x] = true;
	        for(auto nbr: adj[x]){
	            if(!visited[nbr]){
	                indegree[nbr]--;
	                if(indegree[nbr] == 0){
	                    q.push(nbr);
	                }
	            }
	        }
	    }
	    return ans;
	}
