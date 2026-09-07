class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int low =0;
        int high =n-1;
        int mid = -1;

        while(low <= high){
            mid = low+(high-low)/2;

            if(target == nums[mid]){
                return mid;
            }
            else if(target > nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }

        }

        if(target < nums[mid]){
                return mid;
            }
            else{
                return mid+1;
            }
       
    }    

};