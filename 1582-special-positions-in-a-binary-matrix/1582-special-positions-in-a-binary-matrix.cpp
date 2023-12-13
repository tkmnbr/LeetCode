class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int specialNum = 0;
        int m = mat.size();
        int n = mat[0].size();
        vector<int> rowNum(m, 0);
        vector<int> colNum(n, 0);

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    rowNum[i]++;
                    colNum[j]++;
                }
            }
        }

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(mat[i][j] == 1){
                    if(rowNum[i] == 1 && colNum[j] == 1){
                        specialNum++;
                    }
                }
            }
        }
        return specialNum;
    }
};