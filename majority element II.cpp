class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int count1=0;
        int count2=0;
        int major1 = INT_MIN;
        int major2 = INT_MIN;
        int n=nums.size();
        for(int i=0; i<n; i++){
            if(nums[i]==major1){
                count1++;
            }
            else if(nums[i]==major2){
                count2++;
            }
            else if( count1==0){
                major1=nums[i];
                count1=1;
            }
            else if( count2==0){
                major2=nums[i];
                count2=1;
            }
            else{
                count1--;
                count2--;
            }
        }
// verifying that, is it really >n/3
        
        int freq1=0;
        int freq2=0;
        for(int i=0; i<n; i++){
            if(nums[i]==major1){
                freq1++;
            }
            else if(nums[i]==major2){
                freq2++;
            }
        }
        vector<int>result;
        if(freq1 > n / 3){
            result.push_back(major1);
        }
        if(freq2 > n / 3){
            result.push_back(major2);
        }

        return result;

    }
};