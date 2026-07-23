class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int pivot_index = -1;

        for(int i=n-1; i>0; i--){
            if(nums[i] > nums[i-1]){
                pivot_index = i-1;
                break;
            }
        }
         
        if(pivot_index != -1){ 
        int swap_index = pivot_index;
        for(int j=n-1; j>=pivot_index+1; j--){
            if(nums[j] > nums[pivot_index]){
                swap_index = j;
                break;
            }
        }

        swap(nums[pivot_index], nums[swap_index]);
        }

        reverse(nums.begin() + pivot_index+1, nums.end());
    }
};