// If sum == target we will return either “YES” or the indices as per the question.
// But if the left crosses the right pointer, we will return “NO” or {-1, -1}.

import java.util.Arrays;
class Solution {
    public int[] twoSum(int[] nums, int target) {
        Arrays.sort(nums);
        int l=0;
        int r=nums.length-1;
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum>target){
                r--;
            }
            else if(sum==target){
                return "Yes";
            }
            else{
                l++;
            }
        }
        return "No";
    }
}