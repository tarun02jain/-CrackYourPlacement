class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int row = board.size();
        int col = board[0].size();

        for(int i =0; i<row; i++){
            for(int j = 0; j<col; j++){
                int deadNeigh = 0;
                int liveNeigh = 0;
                if (j+1 < col){
                    if (board[i][j+1]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (j-1 >= 0){
                    if (board[i][j-1]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (i-1 >= 0){
                    if (board[i-1][j]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (i+1 < row){
                    if (board[i+1][j]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (j-1>=0 && i-1>= 0 ){
                     if (board[i-1][j-1]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (j-1>=0 && i+1< row ){
                     if (board[i+1][j-1]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (j+1<col && i+1< row ){
                     if (board[i+1][j+1]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }
                if (j+1<col && i-1>= 0 ){
                     if (board[i-1][j+1]%2 == 0) deadNeigh++;
                    else liveNeigh++;
                }

                if (liveNeigh  ==  3){
                    if (board[i][j] == 0) board[i][j] = 2;
                }
                if (liveNeigh  ==  2 || liveNeigh == 3 ){
                    if (board[i][j] == 1) board[i][j] = 3;
                }
            }
        }

        for(int i = 0; i<row; i++){
            for(int j = 0; j<col; j++){
                board[i][j] = board[i][j]/2;
            }
        }
    }
};