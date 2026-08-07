class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums2.size();
        int n2=nums1.size();
        unordered_map<int, int> m;
        stack<int> s;

        for(int i=n1-1; i>=0; i--){
            while(s.size() > 0 && s.top() <= nums2[i]){
                s.pop();
            }

            if(s.empty()){
                m[nums2[i]] = -1;
            }

            else{
                m[nums2[i]] = s.top();
            }

            s.push(nums2[i]);
        }

        vector<int> ans;
        for(int i=0; i<n2; i++){
            ans.push_back(m[nums1[i]]);
        }

        return ans;
    }
};