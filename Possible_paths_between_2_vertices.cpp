public:
    void dfshelper(int &ans, vector<int>adj[],int s,int d){
        if(s == d){
            ans ++;
            return;
        }
        for(auto nbr: adj[s]){
            dfshelper(ans,adj,nbr,d);
        }
    }
	int countPaths(int V, vector<int> adj[], int source, int destination) {
	    // Code here
	    int ans = 0;
	    dfshelper(ans,adj,source,destination);
	    return ans;
	}
