int partition(int arr[],int l,int r){
        int i = l-1;
        int j = l;
        int key = arr[r];
        while(j < r){
            if(arr[j] <= key){
                i++;
                swap(arr[i],arr[j]);
            }
            j++;
        }
        swap(arr[++i],arr[r]);
        return i;
    }
    int Randompartition(int arr[],int l, int r){
        int n = r-l+1;
        int i = rand()%n;
        swap(arr[l+i],arr[r]);
        return partition(arr,l,r);
    }
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        if(l <= r){
            int p = Randompartition(arr,l,r);
            if(p == k-1){
                return arr[p];
            }
            if(p < k){
                kthSmallest(arr,p+1,r,k);
            }
            else{
                kthSmallest(arr,l,p-1,k);
            }
        }
    }
