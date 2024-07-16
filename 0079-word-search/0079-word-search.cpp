class Solution {
public:
    bool check(int i, int j, int ind, int row, int col,
               vector<vector<char>>& board, string word, int k) {
        if (ind == k)
            return true;
        if (i < 0 || i >= row || j < 0 || j >= col || board[i][j] != word[ind])
            return false;
        char temp = board[i][j];
        board[i][j] = '\0';
        if (check(i + 1, j, ind + 1, row, col, board, word, k) ||
            check(i - 1, j, ind + 1, row, col, board, word, k) ||
            check(i, j + 1, ind + 1, row, col, board, word, k) ||
            check(i, j - 1, ind + 1, row, col, board, word, k))
            return true;

        board[i][j] = temp;
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int k = word.length();
        int row = board.size();
        int col = board[0].size();
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (board[i][j] == word[0]) {

                    if (check(i, j, 0, row, col, board, word, k))
                        return true;
                }
            }
        }
        return false;
    }
};