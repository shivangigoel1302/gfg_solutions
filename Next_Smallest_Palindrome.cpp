   void helper(int num[],int n){
        int mid = n/2;
        int i = mid-1;
        int j = (n%2) ? mid+1:mid;
        bool leftsmall = false;
        while(i >=0 && num[i] == num[j]){
            i--;
            j++;
        }
        if(i < 0 || num[i] < num[j]){
            leftsmall = true;
        }
        while(i >= 0){
            num[j] = num[i];
            i--;
            j++;
        }
        if(leftsmall){
            int carry = 1;
            i = mid-1;
            if(n%2){
                num[mid] += carry;
                carry = num[mid]/10;
                num[mid]%=10;
                j = mid+1;
            }
            else{
                j = mid;
            }
            while(carry && i >= 0){
                num[i]+= carry;
                num[j] += carry;
                carry = num[i]/10;
                num[i]%=10;
                num[j]%=10;
                i--;
                j++;
            }
        }
        return;
    }
	vector<int> generateNextPalindrome(int num[], int n) {
	    // code ;
	    int i = 0;
	    while(i < n){
	        if(num[i] != 9){
	            break;
	        }
	        i++;
	    }
	    vector<int>ans;
	    if(i == n){
	        ans.push_back(1);
	        for(int j = 0; j < n-1; j++){
	            ans.push_back(0);
	        }
	        ans.push_back(1);
	        return ans;
	    }
	    helper(num,n);
	    for(int i = 0 ;i < n; i++){
	        ans.push_back(num[i]);
	    }
	    return ans;
	}
