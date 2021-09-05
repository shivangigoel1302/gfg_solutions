public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], int l, int r, int mid){
        long long temp[r-l+1];
        int k = 0;
        int i = l;
        int j = mid+1;
        long long count = 0;
        while(i <= mid && j <= r){
            if(arr[i] <= arr[j]){
                temp[k++] = arr[i++];
            }
            else{
                temp[k++] = arr[j++];
                count += mid+1 - i;
            }
        }
        while(i <= mid){
            temp[k++] = arr[i++];
        }
        while(j <= r){
            temp[k++] = arr[j++];
        }
        for(int s = l; s <= r; s++){
            arr[s] = temp[s - l];
        }
        return count;
    }
    long long mergesort(long long arr[],int r, int l){
        if(l >= r){
            return 0;
        }
        long long temp = 0;
        int mid = (l+r)/2;
        temp += mergesort(arr,mid,l);
        temp += mergesort(arr,r,mid+1);
        temp += merge(arr,l,r,mid);

        return temp;
    }
    long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        long long ans = mergesort(arr,N-1,0);

        return ans;
    }
