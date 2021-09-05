long long int floorSqrt(long long int n)
{
    // Your code goes here
   long long int i=1;
    for(; i*i <=n;i++){
        if(i*i == n){
            return i;
        }
    }
    return i-1;
}
