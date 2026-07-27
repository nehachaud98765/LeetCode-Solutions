class Solution {
public:
    bool find(vector<vector<char>>& board, string word, int i, int j, int count){
        // base case
        if(count == word.size()){
            return true;
        }
        if(i<0 || i>=board.size() || j<0 || j>=board[0].size() || word[count] != board[i][j]){
            return false;
        }

        // visted marked
        int temp = board[i][j];
        board[i][j] = '#';

        // make traversal

        bool isfound = find(board,word,i+1,j,count+1) || find(board,word,i-1,j,count+1) || find(board,word,i,j+1,count+1) ||find(board,word,i,j-1,count+1);

        // backtracing
        board[i][j] = temp;

        return isfound;
    }


    bool exist(vector<vector<char>>& board, string word) {
        int m = board.size();
        int n = board[0].size();

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(board[i][j] == word[0] && find(board,word,i,j,0)){
                    return true;
                }
            }
        }

        return false;
    }
};