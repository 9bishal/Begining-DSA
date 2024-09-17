// Explanation:
// The consecutive numbers here
// are 1, 2, 3, 4, 5, 6. These 6 
// numbers form the longest consecutive
// subsquence.


#include<bits/stdc++.h>
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      sort(arr,arr+N);
      int count=0;
      int last_smalllest= INT_MIN;
      int largest=1;
      for(int i=0; i<N; i++){
          if(arr[i]-1==last_smalllest){
              count++;
              last_smalllest=arr[i];
          }
          else if (arr[i]!=last_smalllest){
              count=1;
              last_smalllest=arr[i];
          }
          largest=max(largest,count);
      }
      return largest;
    }
};