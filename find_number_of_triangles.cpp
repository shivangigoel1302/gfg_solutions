int findNumberOfTriangles(int arr[], int n)
    {
        // code here
        sort(arr,arr+n);
        int cnt = 0;
        for(int i = n-1; i>= 1; i--){
            int l = 0;
            int r = i-1;
            while(l < r){
                if(arr[l] + arr[r] > arr[i]){
                    cnt += r-l;
                    r--;
                }
                else{
                    l++;
                }
            }
        }
        return cnt;
    }
