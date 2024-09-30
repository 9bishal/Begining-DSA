class Solution {
public:
    vector<vector<int>>result;
    void twoSum(vector<int>&nums, int target, int i, int j){
        while(i<j){
            if(nums[i]+nums[j]>target){
                j--;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else {
                // Add the valid triplet to the result first
                  result.push_back({-target, nums[i], nums[j]});
    
                // Move both pointers after pushing the triplet
                i++;
                j--;
    
                // Skip duplicates for i
                while (i < j && nums[i] == nums[i - 1]) {
                i++;
                }
    
                // Skip duplicates for j
                while (i < j && nums[j] == nums[j + 1]) {
                j--;
                }
            }

        }
    }


    vector<vector<int>> threeSum(vector<int>& nums) {
        int n=nums.size();
        //cheching the length
        if(n<3){
            return {};
        }
        result.clear();
        //sorting the array
        sort(begin(nums),end(nums));
        //fixing one element:n1
        for(int i=0; i<n-2;i++){
            if(i!=0 && nums[i]==nums[i-1]){
                continue;
            }
            int n1=nums[i];
            int target=-n1;
            twoSum(nums,target,i+1,n-1);
        }
        return result;
    }

};
