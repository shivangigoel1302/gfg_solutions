//geeks for geeks is not accepting the solution. verified with yt nd geeks for geeks itself
	public:
	/*  Function to find the number of strongly connected components
    *   using Kosaraju's algorithm
    *   V: number of vertices
    *   adj[]: array of vectors to represent graph
    */
    void dfs(stack<int>&s, vector<bool>&visited, vector<int>adj[], int src){
        visited[src] = true;
        for(auto nbr: adj[src]){
            if(!visited[nbr]){
                dfs(s,visited,adj,nbr);
            }
        }
        s.push(src);
    }
    void reverse(vector<int>rev[],vector<int>adj[],int v){
        for(int i = 0 ; i < v; i++){
            for(auto nbr: adj[i]){
                rev[nbr].push_back(i);
            }
        }
    }
    void dfshelper(vector<bool>&visited,int src, vector<int>rev[]){
        visited[src] = true;
        for(auto nbr: rev[src]){
            if(!visited[nbr]){
                dfshelper(visited,nbr,rev);
            }
        }
    }
    int kosaraju(int V, vector<int> adj[]) {
        //code here
        vector<bool>visited(V,false);
        stack<int>s;
        for(int i = 0 ; i < V; i++){
            if(!visited[i]){
                 dfs(s,visited,adj,0);
            }
        }
      vector<int>rev[V];
      reverse(rev,adj,V);
      for(int i = 0 ; i < V; i++){
          visited[i] = false;
      }
      int ans = 0;
     while(!s.empty()){
         int child = s.top();
         s.pop();
         if(!visited[child]){
             dfshelper(visited,child,rev);
             ans++;
         }
     }
     return ans;
    }
