void reverse(int arr[],int l,int r){
    while(l < r){
        swap(arr[l],arr[r]);
        l++;
        r--;
    }
    return;
}
void merge(int arr[],int l,int mid,int r){
    int i = l;
    while(i <= mid && arr[i] < 0){
        i++;
    }
    int j = mid+1;
    while(j <= r && arr[j] < 0){
        j++;
    }
    reverse(arr,i,mid);
    reverse(arr,mid+1,j-1);
    reverse(arr,i,j-1);

    return;
}
void mergesort(int arr[],int l,int r){
    if(l >= r){
        return;
    }
    int mid = (l+r)/2;
    mergesort(arr,l,mid);
    mergesort(arr,mid+1,r);
    merge(arr,l,mid,r);
}
void Rearrange(int arr[], int n)
{
    // Your code goes here
    mergesort(arr,0,n-1);
}
