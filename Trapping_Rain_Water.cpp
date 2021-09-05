int trappingWater(int arr[], int n){
        // Code here
        int lmax=0,rmax=0;
        int lo=0,hi = n-1;
        int ans = 0;
        while(lo <= hi){
            if(arr[lo] < arr[hi]){
                if(arr[lo] > lmax){
                    lmax = arr[lo];
                }
                else{
                    ans += lmax-arr[lo];
                }
                lo++;
            }
            else{
                if(arr[hi] > rmax){
                    rmax = arr[hi];
                }
                else{
                    ans += rmax - arr[hi];
                }
                hi--;
            }
        }
        return ans;
    }
