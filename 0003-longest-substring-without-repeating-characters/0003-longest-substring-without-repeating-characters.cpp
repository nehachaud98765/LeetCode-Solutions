class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        unordered_set<char> alph;
        int left = 0;
        int max_length = 0;
        for(int right=0; right < n; right++){
            while(alph.count(s[right])){
                alph.erase(s[left]);
                left++;
            }
            alph.insert(s[right]);

            max_length = max(max_length, right-left+1);
        }

        return max_length;
    }
};