class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string rsl = strs[0];
        
        if(rsl.empty()){
            return "";
        }

        for(int i=1; i<strs.size(); i++){
           while(strs[i].find(rsl) != 0){
            rsl = rsl.substr(0,rsl.size() - 1);
           }

           if(rsl.empty()){
            return "";
           }
        }

        return rsl;
        
    }
};