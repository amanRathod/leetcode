
class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
//       int m = grid.size();
//         int n = grid[0].size(); 
//         vector<vector<int> > dp(m, vector<int>(n, grid[0][0]));
//         for(int i = m-2; i >=0; --i){
//             dp[i][n-1] = (grid[i+1][n-1] + grid[i][n-1]);
//         }
//          for(int i = n-2; i >=0; --i){
//             dp[m-1][i] = ( grid[m-1][i+1] + grid[m-1][i]);
//         }
        

//          for(int i = m-2; i >=0; --i){
//              for(int j = n-2; j >=0; --j){
//                  dp[i][j] = min(dp[i+1][j], dp[i][j+1]) + grid[i][j];
           
//         }
//         }
//         return dp[0][0];
        
        int m = grid.size();
        int n = grid[0].size(); 
        vector<vector<int> > sum(m, vector<int>(n, grid[0][0]));
        for (int i = 1; i < m; i++)
            sum[i][0] = sum[i - 1][0] + grid[i][0];
        for (int j = 1; j < n; j++)
            sum[0][j] = sum[0][j - 1] + grid[0][j];
        for (int i = 1; i < m; i++)
            for (int j = 1; j < n; j++)
                sum[i][j]  = min(sum[i - 1][j], sum[i][j - 1]) + grid[i][j];
        return sum[m - 1][n - 1];
    
    }
};
