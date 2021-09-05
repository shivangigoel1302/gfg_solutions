public:
    // arr[] : the input array
    // N : size of the input array

    // return the number of subarrays with equal 0s and 1s
    long long int countSubarrWithEqualZeroAndOne(int arr[], int N)
    {
        //Your code here
        map<int,int>m;
        long long int count = 0;
        int currsum = 0;
        for(int i = 0; i < N; i++){
            currsum += arr[i]==0?-1:arr[i];
            m[currsum] ++;
        }
        for(auto it: m){
            if(it.second > 1){
                count += it.second*(it.second -1)/2;
            }
        }
        if(m.find(0) != m.end()){
            count += m[0];
        }
        return count;
    }
