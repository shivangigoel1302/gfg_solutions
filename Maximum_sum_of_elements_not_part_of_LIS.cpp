public:
    int maxSumLis(int Arr[], int n) {
        // code here
        vector<int>dp(n,1);
        int sum = Arr[0];
        int maximum = 1;
        int currmax = INT_MAX;
        for(int i = 1; i < n; i++){
            for(int j = 0 ; j < i ; j++){
                if(Arr[i] > Arr[j]){
                    dp[i] = max(dp[i],dp[j]+1);
                }
            }
            maximum = max(maximum,dp[i]);
            sum += Arr[i];
        }
        for(int i = n-1; i >= 0; i--){
            if(dp[i] == maximum && Arr[i] < currmax){
                sum -= Arr[i];
                currmax = Arr[i];
                maximum--;
            }
        }
        return sum;
    }
