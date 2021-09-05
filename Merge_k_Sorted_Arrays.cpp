public:
    vector<int> mergeKArrays(vector<vector<int>> arr, int k)
    {
    //code here
      priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
      vector<int>ans;
      for(int i = 0 ;i < k ; i++){
          pq.push({arr[i][0],{i,0}});
      }
      while(!pq.empty() && pq.size() <= k){
         auto x = pq.top();
         pq.pop();
         ans.push_back(x.first);
         int i = x.second.first;
         int j = x.second.second;
         j++;
         if(j < k){
             pq.push({arr[i][j],{i,j}});
         }
      }
      while(!pq.empty()){
          ans.push_back(pq.top().first);
          pq.pop();
      }
      return ans;
    }
