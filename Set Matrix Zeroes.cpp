//brute force approach

class Solution {
public:
  void markRow(vector<vector<int>>& matrix ,int i){
    int m=matrix[0].size();
    for(int j=0;j<m;j++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
    void markColumn(vector<vector<int>>& matrix ,int j){
    int n=matrix.size();
    for(int i=0;i<n;i++){
        if(matrix[i][j]!=0){
            matrix[i][j]=-1;
        }
    }
}
    void setZeroes(vector<vector<int>>& matrix) {
         int m=matrix[0].size();
          int n=matrix.size();

          for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
            if(matrix[i][j]==0){
            markRow(matrix,i);
            markColumn(matrix,j);
            }
        }
     }
           for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
             if(matrix[i][j]==-1){
               matrix[i][j]=0;
            }
       }

    }
}
        
};

//better approach
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> row(n, 0);
        vector<int> col(m, 0);

        // Step 1: Mark rows & columns
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(matrix[i][j] == 0){
                    row[i] = 1;
                    col[j] = 1;
                }
            }
        }

        // Step 2: Set zeroes
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(row[i] || col[j]){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


//optimal approach

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int m = matrix[0].size();

        int col0 = 1;

        // Step 1: Mark rows & columns
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){

                if(matrix[i][j] == 0){

                    matrix[i][0] = 0;

                    if(j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }

        // Step 2: Set zeroes inside matrix
        for(int i = 1; i < n; i++){
            for(int j = 1; j < m; j++){

                if(matrix[i][0] == 0 || matrix[0][j] == 0){
                    matrix[i][j] = 0;
                }
            }
        }

        // Step 3: Handle first row
        if(matrix[0][0] == 0){
            for(int j = 0; j < m; j++){
                matrix[0][j] = 0;
            }
        }

        // Step 4: Handle first column
        if(col0 == 0){
            for(int i = 0; i < n; i++){
                matrix[i][0] = 0;
            }
        }
    }
};
