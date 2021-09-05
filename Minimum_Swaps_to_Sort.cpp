public:
	int minSwaps(vector<int>&nums){
	    // Code here
	   vector<pair<int,int>>v(nums.size());
	   for(int i = 0 ; i < nums.size(); i++){
	       v[i].first = nums[i];
	       v[i].second = i;
	   }
	   int ans = 0;
	   sort(v.begin(), v.end());
	   vector<bool>visited(nums.size(),false);
	   for(int i = 0; i < nums.size(); i++){
	       if(visited[i] == true || v[i].second == i){
	           continue;
	       }
	       int cycle = 0;
	       int j = i;
	       while(!visited[j]){
	           visited[j] = true;
	           j = v[j].second;
	           cycle++;
	       }
	       ans += cycle -1;
	   }
	   return ans;
	}
