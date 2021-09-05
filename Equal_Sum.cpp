public:
	string equilibrium(int *arr, int n) {
	    // code here
	    int left = 0;
	    int right = 0;
	    for(int i = 0 ; i < n ; i++){
	        right += arr[i];
	    }
	    for(int i = 0 ; i < n ;i++){
	        if(left == right - arr[i]){
	            return "YES";
	        }
	        left += arr[i];
	        right -= arr[i];
	    }
	    return "NO";
	}
