class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
         if(t.length() > n){
            return "";
         }

         unordered_map<char, int> mp;
        
        // map mai char ko store kar li...
         for(char &ch: t){
            mp[ch]++;
         }
              
         int count = t.length();
         int i=0, j=0;

         int minwindowSize = INT_MAX;
         int start_i = 0;

         while(j < n){
            char ch = s[j];

            if(mp[ch] > 0){
                count--;
            }
            mp[ch]--;

            while(count == 0){
                // window ko shrink karugi
                int currentWindowSize = j-i+1;

                if(minwindowSize > currentWindowSize){
                    minwindowSize = currentWindowSize;
                    start_i = i;
                }

                mp[s[i]]++;

                if(mp[s[i]] > 0){
                    count++;
                }
                i++;
            }

            j++;
         }    

        if(minwindowSize == INT_MAX){
            return "";
        }
        else{
          return s.substr(start_i,  minwindowSize);
        }

    }
};