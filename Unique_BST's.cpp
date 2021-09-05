class Solution{
    public:
    // Functiuon to return number of trees

    // Return the total number of BSTs possible with keys [1....N] inclusive.
    int numTrees(int N) {
        // Your code here
        int mod = 1e9+7;
        vector<long long int>dp(N+1,0);

        dp[0]= dp[1] = 1;
        dp[2] = 2;
        for(int i = 3; i <= N; i++){
            for(int j = 1; j <= i; j++){
                dp[i] = dp[i] + dp[i-j]*dp[j-1];
                dp[i]%=mod;
            }
            // cout<<endl;
            dp[i]%=mod;
        }
       // cout<<dp[19];
        return dp[N];
    }
};
