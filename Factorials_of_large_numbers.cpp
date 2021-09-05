vector<int> factorial(int N){
        // code here
        vector<int>ans;
        ans.push_back(1);
        for(int i = 2; i <= N; i++){
            int c = 0;
            int x =i;
            for(int j = 0 ; j < ans.size(); j++){
                ans[j] *= x;
                ans[j] += c;
                c = ans[j]/10;
                ans[j]%=10;
            }
            while(c){
                ans.push_back(c%10);
                c/=10;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
