public:
    bool topological(vector<int>adj[],int v,vector<int>indegree){
        queue<int>q;

        vector<bool>visited(v,false);

        for(int i = 0 ; i< v; i++){
            //cout<<indegree[i]<<" ";
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        while(!q.empty()){
            int a = q.front();
           // cout<<a<<" ";
            v--;
            q.pop();
            for(auto nbr: adj[a]){
                indegree[nbr]--;
                if(indegree[nbr] == 0){
                    q.push(nbr);
                }
            }
        }
        return v == 0;
    }
	bool isPossible(int N, vector<pair<int, int> >& prerequisites) {
	    // Code here

	    int v = N;
	    vector<int>adj[v];
	    vector<int>indegree(v,0);
	    for(int i = 0 ; i < prerequisites.size(); i++){
	        adj[prerequisites[i].first].push_back(prerequisites[i].second);
	        indegree[prerequisites[i].second]++;
	    }
	    for(int i = 0 ; i < v; i++){
	        //cout<<indegree[i]<<" ";
	    }
	    return topological(adj,v,indegree);
	}
