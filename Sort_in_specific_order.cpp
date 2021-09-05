void sortIt(long long arr[], long long n)
    {
        //code here.
        for(int i = 0; i < n; i++){
            if(arr[i]%2 == 1){
                arr[i]*= -1;
            }
        }
        sort(arr,arr+n);
        for(int i = 0; i < n; i++){
            if(arr[i]< 0){
                arr[i] = abs(arr[i]);
            }
        }
    }
