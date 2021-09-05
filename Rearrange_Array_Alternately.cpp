  public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n)
    {

    	// Your code here
    	int maxind = n-1;
    	int minind = 0;
    	int maxelement = arr[n-1]+1;
    	for(int i = 0 ; i < n ; i++){
    	    if(i%2 == 0){
    	        arr[i] += (arr[maxind]%maxelement)*maxelement;
    	        maxind--;
    	    }
    	    else{
    	        arr[i] += (arr[minind]%maxelement)*maxelement;
    	        minind++;
    	    }
    	}
    	for(int i = 0 ; i < n ; i++){
    	    arr[i] /= maxelement;
    	}
    	 return;
    }
