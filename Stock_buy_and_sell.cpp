public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
        int local_min,local_max;
        int i = 0;
        vector<vector<int>>ans;
        while(i < n-1){
            while(i < n-1 && A[i] >= A[i+1]){

                i++;
            }
            if(i == n-1){
                break;
            }
            vector<int>temp;
            temp.push_back(i);
            i++;
            while(i < n && A[i] >= A[i-1]){
                i++;
            }
            temp.push_back(i-1);
            ans.push_back(temp);
        }

        return ans;
    }
