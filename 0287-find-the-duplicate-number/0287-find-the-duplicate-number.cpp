class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        slow = nums[slow];  // one step move;
        fast = nums[nums[fast]]; // two step move
        
        // cycle detect
        while(slow != fast){
            slow = nums[slow];
            fast = nums[nums[fast]];
        }
    
        slow = nums[0];
        while(slow != fast){
            slow = nums[slow];
            fast = nums[fast];
        } 

        return slow;

    }
};