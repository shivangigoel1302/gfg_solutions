public:
vector<vector<int>>dp;
    int helper(int n,int arr[],int i,int j){
        if(i == n){
            return 0;
        }
        if(i > j){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int opt1 = arr[i];
        opt1 += min(helper(n,arr,i+2,j),helper(n,arr,i+1,j-1));
        int opt2 = arr[j];
        opt2 += min(helper(n,arr,i+1,j-1),helper(n,arr,i,j-2));
        return dp[i][j]=max(opt1,opt2);
    }
    bool is1winner(int N,int arr[]) {

        // code here
        int sum = 0;
        for(int i = 0; i < N; i++){
            sum += arr[i];
        }
        dp.resize(N,vector<int>(N,-1));
        int ans = helper(N,arr,0,N-1);
        int second = sum - ans;
        if(ans > second){
            return true;
        }
        return false;
    }
