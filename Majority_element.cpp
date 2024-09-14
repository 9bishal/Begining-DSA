//{ Driver Code Starts
// Initial template for C++
// A majority element in an array is an element that appears strictly more than arr.size()/2 times in the array.

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int majorityElement(vector<int>& arr) {

        // your code here
        int count=0;
        int ele=0;
        for(int i=0; i<arr.size(); i++){
            if(count==0){
                count=1;
                ele=arr[i];
            }
            else if(ele==arr[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int count1=0;
        for(int i=0; i<arr.size(); i++){
            if(arr[i]==ele){
                count1++;
            }
        if(count1>(arr.size()/2)) return ele;
        }
        return -1;
    }
    
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        int n;
        vector<int> a, b;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int num;
        while (ss >> num)
            a.push_back(num);

        Solution obj;
        cout << obj.majorityElement(a) << endl;
    }

    return 0;
}

// } Driver Code Ends