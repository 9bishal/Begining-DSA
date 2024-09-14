// Input: arr[] = [1, 2, 3, -2, 5]
// Output: 9
// Explanation: Max subarray sum is 9 of elements (1, 2, 3, -2, 5) which is a contiguous subarray.
// User function Template for C++
class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        // code here...
        int max_current = arr[0];

        int max_global = arr[0];
        
        // Iterate through the array starting from the second element
        for (int i = 1; i < arr.size(); i++) {
            // Update max_current: either include current element in the subarray or start a new subarray
            max_current = max(arr[i], max_current + arr[i]);
            
            // Update max_global if the current sum is greater than the global maximum sum
            if (max_current > max_global) {
                max_global = max_current;
            }
        }
        
        return max_global;
    }
};