ll countStrings(int n) {
	    // code here
	    int mod = 1e9+7;
	    vector<long long>a(n,0),b(n,0);
	    a[0]=b[0] = 1;
	    for(int i = 1; i < n; i++){
	        a[i] = (a[i-1] + b[i-1])%mod;
	        b[i] = (a[i-1])%mod;
	    }
	    return (a[n-1]+b[n-1])%mod;
	}
