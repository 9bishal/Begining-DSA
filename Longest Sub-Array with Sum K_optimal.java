class Solution {
    // Function for finding maximum and value pair
    public static int lenOfLongSubarr(int A[], int N, int K) {
        // Complete the function
        int l=0;
        int r=0;
        int sum=0;
        int maxi=0;
        while(r<N){
            sum=sum+A[r];
            while(l<=r && sum>K){
                sum=sum-A[l];
                l++;
            }
            if(sum==K){
                maxi = Math.max(maxi, r - l + 1); 
            }
            r++;
        }
        return maxi;
    }
    
}