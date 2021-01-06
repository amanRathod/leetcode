// Best Use of Lambda Expression in c++
class Solution {
public:
    string customSortString(string S, string T) {
        unordered_map<char, int> mp;
      
      for(int i = 0; i < S.length(); ++i){
        mp[S[i]] = i+1;
      }
      
      sort(T.begin(), T.end(),[&](char a, char b){
        return mp[a] < mp[b];
      });
      
      return T;
    }
};