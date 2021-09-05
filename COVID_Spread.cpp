class Solution {
public:
    int helpaterp(vector<vector<int>> hospital)
    {
        //code here
        int x[4] = {0,0,1,-1};
        int y[4] = {1,-1,0,0};
        queue<pair<int,pair<int,int>>>q;
        int m = hospital.size();
        int n = hospital[0].size();
        for(int i = 0 ; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(hospital[i][j] == 2){
                    q.push({0,{i,j}});
                }
            }
        }
        int ans = 0;
        while(!q.empty()){
            int currtime = q.front().first;
            ans = max(ans,currtime);
            int r = q.front().second.first;
            int c = q.front().second.second;
            q.pop();
            for(int i = 0 ; i < 4; i++){
                int nr = r + x[i];
                int nc = c+ y[i];
                if(nr < m && nr >=0 && nc < n && nc >=0 && hospital[nr][nc] == 1){
                    hospital[nr][nc] = 2;
                    q.push({currtime + 1,{nr,nc}});
                }
            }
        }
        for(int i = 0; i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(hospital[i][j] == 1){
                    return -1;
                }
            }
        }
        return ans;
    }
};
