// You are given a 0-indexed integer array nums of even length consisting of an equal number of positive and negative integers.

// You should return the array of nums such that the the array follows the given conditions:

// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> result(nums.size());
    int positive=0;
    int negative=1;
    for(int i=0;i<nums.size(); i++){
        if(nums[i]>0){
            result[positive]=nums[i];
            positive=positive+2;
        }
        else{
            result[negative]=nums[i];
            negative=negative+2;
        }
    }
    return result;
    }
};