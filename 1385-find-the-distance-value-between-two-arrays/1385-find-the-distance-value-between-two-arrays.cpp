class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n = arr1.size();
        int m = arr2.size();
        int count = 0;

        for(int i=0; i<n; i++){
           int x = arr1[i];
           bool isvalid = true;


           for(int j=0; j<m; j++){
            int y = arr2[j];
            int difference = abs(x-y);

            if(difference <= d){
                isvalid = false;
                break;
            }

           }

           if(isvalid == true){
            count++;
           }
        }

        return count;
    }
};