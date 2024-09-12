// using O(n^2)
class Solution {
    // Function for finding maximum and value pair
    public static int lenOfLongSubarr(int A[], int N, int K) {
        // Complete the function
        int len=0;
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                int sum=0;
                for(int k=i; k<=j; k++){
                    sum=sum+A[k];
                }
                if(sum==K){
                    len=Math.max(len, j-i+1);
                }
            }
        }
        return len;
    }
}