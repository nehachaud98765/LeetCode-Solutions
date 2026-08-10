class Solution {
public:
    string removeOccurrences(string s, string part) {
        int n = s.length();
        int m = part.length();
        string result = "";

        for(int i=0; i<n; i++){
            char c = s[i];
            result.push_back(c);

            if(result.length() >= m && result.substr(result.length() - m) == part){
                result.erase(result.length() - m);
            }
        }

        return result;
    }
};