// Last updated: 12/19/2025, 3:25:46 PM
class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int m = mat.size();
        int n = mat[0].size();
        vector<pair<int,int>> v;
        for(int i = 0 ; i< m ;i++){
            for(int j = 0 ; j < n ;j++){
                if(mat[i][j]==0){
                v.push_back({i,j});}
            }
        }
        for(auto & it : v){
            int row=it.first;
            int col= it.second;
            for(int i = 0 ; i< m ; i++){
                mat[i][col] = 0;
            }
            for(int j = 0 ; j<n ; j++){
                mat[row][j]=0;
            }


        }

    }
};