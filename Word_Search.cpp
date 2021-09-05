
//time limit exceeded
bool findnext(vector<vector<char>>board,int i,int j, int ind, string word){
    if(ind >= word.size()){
        return true;
    }
    if(i >= board.size() || i < 0 || j >= board[0].size() || j < 0 || board[i][j] != word[ind]){
        return false;
    }
    board[i][j] = '-';
    bool opt1 = findnext(board,i+1,j,ind+1,word);
    bool opt2 = findnext(board,i-1,j,ind+1,word);
    bool opt3 = findnext(board,i,j+1,ind+1,word);
    bool opt4 = findnext(board,i,j-1,ind+1,word);
    board[i][j] = word[ind];
    return opt1 || opt2|| opt3|| opt4;
}
    bool isWordExist(vector<vector<char>>& board, string word) {
        // Code here
        int m = board.size();
        int n = board[0].size();
        for(int i = 0 ;i < m ; i++){
            for(int j = 0 ; j < n ; j++){
                if(board[i][j] == word[0]){
                    if(findnext(board,i,j,0,word)){
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
