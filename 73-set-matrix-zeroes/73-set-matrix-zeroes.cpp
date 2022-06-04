class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
     
        int m = matrix.size();
        int n = matrix[0].size();
        
        vector<int> rows;
        vector<int> cols;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j]==0){
                    rows.push_back(i);
                    cols.push_back(j);
                }
            }
        }
        
        for(int i=0; i<rows.size(); i++){
          makeZeros(matrix, rows[i], cols[i]);  
        }
        
    }
    
    void makeZeros(vector<vector<int>>& matrix, int i, int j){
        int m = matrix.size();
        int n = matrix[0].size();
        
        for(int k=0; k<n; k++){
            matrix[i][k]=0;
        }
        
        for(int k=0; k<m; k++){
            matrix[k][j]=0;
        }
    }
};