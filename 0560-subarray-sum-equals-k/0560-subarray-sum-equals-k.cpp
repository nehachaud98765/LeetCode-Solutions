class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;

        int result = 0;
        int cumSum = 0;
        mpp.insert({0,1});

        for(int i=0; i<n; i++){
            cumSum += nums[i];

            if(mpp.find(cumSum-k) != mpp.end()){
                result += mpp[cumSum-k];
            }
            mpp[cumSum]++;
        }

        return result;
    }
};