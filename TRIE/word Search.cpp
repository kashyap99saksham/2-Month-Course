// Use DFS and remember do not check back character from where u re coming.. so make it as *
class Solution {
public:
    bool FindMyWord(int i,string word,int r,int c,vector<vector<char>>& board)
    {
        if(i == word.length())    return true;
        if(r<0||c<0||r>=board.size()||c>=board[0].size()|| board[r][c]!=word[i])    return false;  
        char temp = board[r][c];
        board[r][c] = '*';
        bool found = (FindMyWord(i+1,word,r-1,c,board)) ||
                     (FindMyWord(i+1,word,r+1,c,board)) ||
                     (FindMyWord(i+1,word,r,c-1,board)) ||
                     (FindMyWord(i+1,word,r,c+1,board));
        board[r][c]  = temp;
         return found;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int r = board.size();
        int c = board[0].size();

        for(int i=0;i<r;i++)
        {
            for(int j=0;j<c;j++)
            {
                if(board[i][j]==word[0])
                {
                    int s = 0;
                    if(FindMyWord(s,word,i,j,board))    return true;
                }
            }
        }
        return false;
    }
};  

// Nice use of substr function . Good AproAch 
bool exist(vector<vector<char>>& board, string word) {
    for (unsigned int i = 0; i < board.size(); i++) 
        for (unsigned int j = 0; j < board[0].size(); j++) 
            if (dfs(board, i, j, word))
                return true;
    return false;
}   

bool dfs(vector<vector<char>>& board, int i, int j, string& word) {
    if (!word.size())
        return true;
    if (i<0 || i>=board.size() || j<0 || j>=board[0].size() || board[i][j] != word[0])  
        return false;
    char c = board[i][j];
    board[i][j] = '*';
    string s = word.substr(1);
    bool ret = dfs(board, i-1, j, s) || dfs(board, i+1, j, s) || dfs(board, i, j-1, s) || dfs(board, i, j+1, s);
    board[i][j] = c;
    return ret;
}