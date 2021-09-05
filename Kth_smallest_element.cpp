int pivot(int arr[], int l , int r){
    int j = l-1;
    int key = arr[r];
    for(int i = l; i < r; i++){
        if(arr[i] <= key){
            j++;
            swap(arr[j],arr[i]);
        }
    }
    j++;
    swap(arr[j],arr[r]);
    return j;
}
int pivotrandom(int arr[], int l , int r){
    int n = r - l + 1;
    int p = rand()%n;
    swap(arr[l + p],arr[r]);
    return pivot(arr,l,r);
}
int kthSmallest(int arr[], int l, int r, int k) {
    //code here
    if(l > r){
        return -1;
    }
    int p = pivotrandom(arr,l,r);
    int ans = -1;
    if(p == k-1){
        ans = arr[p];
        return ans;
    }
    if(p < k){
       ans = kthSmallest(arr,p+1,r,k);
       return ans;
    }
    else{
       ans = kthSmallest(arr,l,p-1,k);
    }
    return ans;
}
