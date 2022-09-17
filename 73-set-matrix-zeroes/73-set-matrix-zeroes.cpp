class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int row = matrix.size();
        int col = matrix[0].size();
        set<int> rows;
        set<int> cols;
        
        for(int i = 0;i<row;i++)
        {
            for(int j = 0;j<col;j++)
            {
                if(matrix[i][j] == 0)
                {
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int i = 0 ;i<row;i++)
        {
            for(int j = 0;j<col ;j++)
            {
                if(rows.find(i) != rows.end() || cols.find(j) != cols.end())
                    matrix[i][j] = 0;
            }
        }
    }
};