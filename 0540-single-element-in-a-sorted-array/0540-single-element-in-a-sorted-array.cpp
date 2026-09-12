class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        for(int j=0; j<n-1; j+=2){
            if(nums[j] != nums[j+1]){
                return nums[j];
            }
        }

        return nums[n-1];
    }
};