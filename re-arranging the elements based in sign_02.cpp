// Every consecutive pair of integers have opposite signs.
// For all integers with the same sign, the order in which they were present in nums is preserved.
// The rearranged array begins with a positive integer.
// Return the modified array after rearranging the elements to satisfy the aforementioned conditions.

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> post,neg;
        for(int i=0; i<nums.size();i++){
            if(nums[i]>0){
                post.push_back(nums[i]);
            }
            else{
                neg.push_back(nums[i]);
            }
        }
        if(post.size()>neg.size()){
            for( int i=0; i<neg.size(); i++){
                nums[2*i]=post[i];
                nums[2*i+1]=neg[i];
            }
            int index=neg.size()*2;
            for(int i=neg.size(); i<post.size();i++){
                nums[index]=post[i];
                index++;
            }
            
        }
        else{
            for( int i=0; i<post.size(); i++){
                nums[2*i]=post[i];
                nums[2*i+1]=neg[i];
            }
            int index=post.size()*2;
            for(int i=post.size(); i<neg.size();i++){
                nums[index]=neg[i];
                index++;
            }
            
        }
        return nums;
    }
};