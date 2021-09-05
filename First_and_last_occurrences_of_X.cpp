int first(vector<int>&arr, int n, int x){
        int l = 0;
        int r = n-1;
        while(l <= r){
            int mid = (l+r)/2;
            if((mid == 0 || arr[mid-1] < x) &&( arr[mid] == x )){
                return mid;
            }
            else if(arr[mid] < x){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }
        return -1;
    }
    int last(vector<int>&arr,int n,int x){
        int l = 0;
        int r = n-1;
        while(l <= r){
            int mid = (l+r)/2;
            if((mid == n-1 || arr[mid+1] > x) && arr[mid] == x){
                return mid;
            }
            else if(arr[mid] > x){
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return -1;
    }
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        vector<int>v(2);
        v[0] = first(arr,n,x);
        v[1] = last(arr,n,x);
        if(v[0] == -1){
           return {-1};
        }
        return v;
    }
