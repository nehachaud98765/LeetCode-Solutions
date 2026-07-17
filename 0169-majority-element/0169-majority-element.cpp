class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int feq = 1;
        int maj = nums[0];

        for(int i = 1; i<n; i++){
            if(feq == 0){
                maj = nums[i];
                feq = 1;
            }
            else if(maj == nums[i]){
                feq++;
            }
            else{
                feq--;
            }
        }

        return maj;

    }    

};