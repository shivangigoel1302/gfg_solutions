long long maxArea(long long A[], int len)
{
    // Your code goes here
    long long  ans = 0;
    int l = 0;
    int r = len-1;
    while(l <= r){
        long long temp = (r-l)*(min(A[r],A[l]));
        ans = ans>temp?ans:temp;
        if(A[r] < A[l]){
            r--;
        }
        else{
            l++;
        }
    }
    return ans;
}
