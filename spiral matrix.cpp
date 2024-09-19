 vector<int> ans;
        if(matrix.empty()) return ans;  // Handle edge case where matrix is empty
        
        int n = matrix.size();      // Number of rows
        int m = matrix[0].size();   // Number of columns
        int left = 0, right = m - 1, top = 0, bottom = n - 1;
        
        while(left <= right && top <= bottom) {
            // Traverse from left to right
            for(int i = left; i <= right; i++) {
                ans.push_back(matrix[top][i]);
            }
            top++;
            
            // Traverse from top to bottom
            for(int i = top; i <= bottom; i++) {
                ans.push_back(matrix[i][right]);
            }
            right--;
            
            // Traverse from right to left, if still within bounds
            if(top <= bottom) {
                for(int i = right; i >= left; i--) {
                    ans.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            
            // Traverse from bottom to top, if still within bounds
            if(left <= right) {
                for(int i = bottom; i >= top; i--) {
                    ans.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        
        return ans;
    }