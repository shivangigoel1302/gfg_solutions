 public:
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       vector<int>ans(n,0);
       ans[0] = 1;
       for(int i = 1; i < n; i++){
           int counter = 1;
           while((i - counter >= 0) && price[i] >= price[i-counter]){
               counter += ans[i-counter];
           }
           ans[i] = counter;
       }
       return ans;
    }
