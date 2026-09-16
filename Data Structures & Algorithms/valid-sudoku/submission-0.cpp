class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<map<char,bool>> row(9);
        vector<map<char,bool>> col(9);
        vector<map<char,bool>> sq(9);

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                char num = board[i][j];
                if(num == '.'){
                    continue;
                }
                int sqN = (i/3)*3+(j/3);
                if(row[i].find(num)!=row[i].end()){
                    return false;
                }else if(col[j].find(num)!=col[j].end()){
                    return false;
                }else if(sq[sqN].find(num)!=sq[sqN].end()){
                    return false;
                }
                row[i][num]=true;
                col[j][num]=true;
                sq[sqN][num]=true;
            }
        }
        return true;
    }
};
