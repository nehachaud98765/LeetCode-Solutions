class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size();
        int col = matrix[0].size();

        int start = 0;
        int end = row*col-1;

        while(start <= end){
            int mid = start+(end-start)/2;
            int r = mid/col;
            int c = mid % col;
            if(matrix[r][c] > target){
                end = mid-1;
            }
            else if(matrix[r][c] < target){
                start = mid+1;
            }
            else{
                return true;
            }
        }

        return false;
    }
};