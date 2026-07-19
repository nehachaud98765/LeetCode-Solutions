class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int count_1 = 0;
        int maj_1 = NULL;
        int count_2 = 0;
        int maj_2 = NULL;

        for(int i=0; i<n; i++){
            if(nums[i] == maj_1){
                count_1++;
            }
            else if(nums[i] == maj_2){
                count_2++;
            }
            else if(count_1 == 0){
                maj_1 = nums[i];
                count_1 = 1;
            }
            else if(count_2 == 0){
                maj_2 = nums[i];
                count_2 = 1;
            }
            else{
                count_1--;
                count_2--;
            }
        }

        count_1 = 0;
        count_2 = 0;

        for(int i =0; i<n; i++){
            if(nums[i] == maj_1){
                count_1++;
            }
            else if(nums[i] == maj_2){
                count_2++;
            }
        }

        vector<int> result;
        
        if(count_1 > n/3){
        result.push_back(maj_1);
        }
        if(count_2 > n/3){
        result.push_back(maj_2);
        }

        return result;

    }
};