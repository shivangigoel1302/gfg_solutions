public:
    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){

        // Your code here
        int large = arr[0];
        int maximum = large;
        for(int i = 1; i < n ; i++){
            large = max(arr[i],large + arr[i]);
            maximum = max(maximum,large);
        }
        return maximum;
    }
