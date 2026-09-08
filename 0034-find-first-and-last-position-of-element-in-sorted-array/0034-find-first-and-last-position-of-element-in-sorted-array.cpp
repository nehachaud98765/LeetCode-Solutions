class Solution {

public:
    int Right_Rec(vector<int>& nums, int target, int n){
        int low = 0;
        int high = n-1;
        int right = -1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(target == nums[mid]){
                right = mid;
                low = mid+1;
            }
            else if(target > nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }

        return right;
    }

    int Left_Rec(vector<int>& nums, int target, int n){
        int low = 0;
        int high = n-1;
        int left = -1;
        while(low <= high){
            int mid = low+(high-low)/2;
            if(target == nums[mid]){
                left = mid;
                high = mid-1;
            }
            else if(target > nums[mid]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return left;
    }
    

    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int left = Left_Rec(nums, target, n);
        int right = Right_Rec(nums, target, n);

        return {left, right};
    }
};