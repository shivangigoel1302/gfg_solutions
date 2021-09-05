void sort012(int a[], int n)
    {
        // coode here
        int l = 0;
        int r = n-1;
        int mid = 0;
        while(mid <= r){
            if(a[mid] == 0){
                swap(a[l++],a[mid++]);
            }
            else if(a[mid] == 1){
                mid++;
            }
            else{
                swap(a[mid],a[r--]);
            }
        }
        return;
    }
