// Last updated: 12/19/2025, 3:25:50 PM
class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int row = m.size();
        int col= m[0].size();
        int c=col-1;
        vector<vector<int>> temp(row, vector<int>(col));
        for(int i = 0 ; i<row ; i++){
            int first = 0;
            for(int j = 0; j < col ;j++){
                temp[first][c]=m[i][j];
                first++;
                }
            c--;    
            }
            
        m=temp;
        }


        
        
    
};