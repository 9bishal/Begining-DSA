// N = 5
// Arr = {10 , 2, -2, -20, 10}
// k = -10
// Output: 3


class Solution{
    public:
    int findSubArraySum(int Arr[], int N, int k)
    {
        // code here
        int count=0;
        for(int i=0; i<N; i++){
            int sum=0;
            for(int j=i; j<N; j++){
                sum=sum+Arr[j];
                if(sum==k){
                    count++;
                }
            }
            
        }
        return count;
    }
};