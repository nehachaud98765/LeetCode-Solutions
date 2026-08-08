class Solution {
public:
    bool isAnagram(string s, string t) {
        int n =s.length();
        int m =t.length();
        vector<int> count(26,0);

        for(int i=0; i<n; i++){
            char ch = s[i];
            int index = ch-'a';
            count[index]++;
        }

        for(int j=0; j<m; j++){
            char ch = t[j];
            int index = ch-'a';
            count[index]--;
        }

        vector<int> ans;
        for(int i=0; i<count.size(); i++){
            if(count[i] != 0){
                return false;
            }
        }

        return true;
    }
};