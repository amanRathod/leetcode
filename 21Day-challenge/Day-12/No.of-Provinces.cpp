
class Solution {
public:
    int find(int x, vector<int>& parn){
        return parn[x] == x ? x:find(parn[x], parn);
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
          
        int n = isConnected.size();
        if(n== 0)
            return 0;
        vector<int> v(n);
        int grp = n;
        
        for(int i = 0; i < n; ++i){
            v[i] = i;
        }
        
        for(int i= 0; i< n; ++i){
            for(int j = i+1; j < n; ++j){
                if(isConnected[i][j]){
                    int n1 = find(i, v);
                    int n2 = find(j, v);
                    
                    if(n1 != n2){
                        v[n1] = n2;
                        grp--;
                    }
            }
        }
        }
            return grp;
    }
};
