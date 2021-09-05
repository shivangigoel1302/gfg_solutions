int save_gotham(int arr[], int n)
{
    // Complete the function
    long long int ans = 0;
    int mod = 1e9 + 7;
    stack<int>s;
    for(int i = n-1; i>=0; i--){
        while(!s.empty() && s.top() <= arr[i]){
            s.pop();
        }
        if(!s.empty()){
            ans += s.top();
            ans %= mod;
        }
        s.push(arr[i]);
    }
    return ans%mod;
}
