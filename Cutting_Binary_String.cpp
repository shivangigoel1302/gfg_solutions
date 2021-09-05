long long getnum(string s,int j,int i){
    long long num = 0;
    for(int st = j; st < i; st++){
        num = num*2 + (s[st] -'0');
    }
    return num;
}

bool ispower(long long n)
{
    if (n < 125)
        return (n == 1 || n == 5 || n == 25);
    if (n % 125 != 0)
        return false;
    else
        return ispower(n / 125);
}
int cuts(string s){
    //code
   int n = s.size();
   vector<int>dp(n+1,n+1);
   dp[0] = 0;
   for(int i = 1; i <=n; i++){
       if(s[i-1] == '0'){
           continue;
       }
       for(int j = 0; j < i; j++){
           if(s[j] == '0'){
               continue;
           }
           long long num = getnum(s,j,i);
           if(!ispower(num)){
               continue;
           }
           dp[i] = min(dp[i],dp[j]+1);
       }
   }
   if(dp[n] == n+1){
       return -1;
   }
   return dp[n];
