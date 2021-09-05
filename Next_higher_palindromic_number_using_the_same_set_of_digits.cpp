
//not accepting on one test case even when output shown is same
public:
    void reverse(string &N, int i , int j){
        while(i < j){
            swap(N[i],N[j]);
            i++;
            j--;
        }
    }
    string nextPalin(string N) {
        //complete the function here
        int n = N.size();
        int mid = n/2 -1;
        int i = mid-1;
        while(i >=0){
            if(N[i] < N[i+1]){
                break;
            }
            i--;
        }
        if(i < 0){
            return "-1";
        }
        int smallest = i+1;
        int j = i+2;
        while(j <= mid){
            if(N[j] > N[i] && N[j] <= N[smallest]){
                smallest = j;
            }
            j++;
        }
        swap(N[smallest],N[i]);
        swap(N[n-1-i],N[n-1-smallest]);
        reverse(N,i+1,mid);
        if(n%2){
            reverse(N,mid+2,n-i-2);
        }
        else{
            reverse(N,mid+1,n-i-2);
        }
        return N;
    }
