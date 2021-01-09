class Solution {
public:
    int countVowelStrings(int n) {
       
        vector<vector<int>> v(n+1, vector<int>(6));
        for(int i =1; i <=n; ++i){
          for(int j = 1; j <= 5; ++j){
            v[i][j] = (v[i][j-1]) + (i >1? v[i-1][j]:1 );
          }
        }
      return v[n][5];
    }
}; 