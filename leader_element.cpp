
// Input: a = [1, 2, 3, 2], n = 4

// Output: 2 3


vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    vector<int> ans;
    int n=a.size();
    int max=a[n-1];
    ans.push_back(max);
    for(int i=n-2; i>=0; i--){
        if(a[i]>max){
            ans.push_back(a[i]);
            max=a[i];
        }
    }
    return ans;
    
}