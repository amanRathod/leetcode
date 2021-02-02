class Solution {
public:
    int LCS(string a, string b){
        int lenX = a.length();
        int lenY = b.length();
        
        int dp[lenX+1][lenY+1];
        
        for(int i = 0; i<= lenX; ++i)
            dp[i][0] = 0;
        
        for(int i = 0; i<= lenY; ++i)
            dp[0][i] = 0;
        
          for(int i = 1; i<= lenX; ++i){
            for(int j = 1; j<= lenY; ++j)
                if(a[i-1] == b[j-1])
                    dp[i][j] = dp[i-1][j-1] + 1;
                else 
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
          }
       
        return dp[lenX][lenY];
        
    }
    int longestPalindromeSubseq(string s) {
        
        string p = s;
        reverse(s.begin(), s.end());
        return LCS(s, p);
        
    }
};