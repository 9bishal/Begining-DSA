class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int marked_index=-1;
        int n=nums.size();

        // to find the marked index
        for(int i=n-1; i>0; i--){
            if(nums[i-1]<nums[i]){
                marked_index=i-1;
                break;
            }
        }

        // if marked index is n't found,
        //  then the array is reversed and then the output will be the nums
        if(marked_index==-1){
            reverse(nums.begin(), nums.end());
            return ;
            
        }

        // then finding the just greater element than the marked element, 
        // then swaping the both element
        for(int i=n-1; i>marked_index; i--){
            if(nums[i]>nums[marked_index]){
                swap(nums[i],nums[marked_index]);
                break;
            }
        }

        // then swaping the all elements from the right
        reverse(nums.begin()+marked_index + 1, nums.end());
        
    }
    // return nums;
};