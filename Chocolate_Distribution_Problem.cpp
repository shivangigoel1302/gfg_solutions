long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
    sort(a.begin(),a.end());
    int i = 0;
    int j = m-1;
    long long int mindiff = INT_MAX;
    while(j < n){
        mindiff = min(mindiff,a[j]-a[i]);
        j++;
        i++;
    }
    return mindiff;

    }
