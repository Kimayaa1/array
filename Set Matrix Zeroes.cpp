class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<vector<int>> matrix1(m, vector<int>(n, 0));
        for(int i =0; i<m; i++){
            for(int j =0; j<n; j++){
                matrix1[i][j] = matrix[i][j];
            }
        }

        for(int i =0; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix1[i][j] == 0){
                    for(int k =0; k<n; k++){
                        matrix[i][k] = 0;
                    }
                    for(int k =0; k<m; k++){
                        matrix[k][j] = 0;
                    }
                }

            }
        }
    }
};

// Time complexity O(m*n)
// Space complexity O(max(m,n))
