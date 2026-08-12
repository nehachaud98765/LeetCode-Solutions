class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int idx = 0;

        for(int i=0; i<n;){
            char ch = chars[i];
            int count = 0;

            while(i<n && chars[i] == ch){
                count++;
                i++;
            }

            chars[idx] = ch;
            idx++;
            if(count > 1){
                string countstr = to_string(count);

                for(int i=0; i<countstr.size(); i++){
                    char ch = countstr[i];
                   chars[idx] = ch;
                   idx++;
                }
            }
        }

        return idx;
    }
};