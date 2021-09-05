void convertToWave(vector<int>& a, int n){

        // Your code here
        for(int i = 0; i < n; i+=2 ){
            if(i > 0 && a[i-1] > a[i]){
                swap(a[i],a[i-1]);
            }
            if(i < n-1 && a[i-1] < a[i+1]){
                swap(a[i],a[i+1]);
            }
        }
    }
