class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();

        deque<int> dqe;
        vector<int> result;

        for(int i=0; i<n; i++){
            while(!dqe.empty() && dqe.front() <= i-k){
                dqe.pop_front();
            }

            while(!dqe.empty() && nums[i] > nums[dqe.back()]){
                dqe.pop_back();
            }

            dqe.push_back(i);

            if(i >= k-1){
                result.push_back(nums[dqe.front()]);
            }
        }

        return result;
    }
};