class Solution {
public:
  
  
void inverse(string &s) {
        for (auto &c: s) {
            c = (c == '0') ? '1' : '0';
        }
    }
    string reverseInverse(string s) {
        inverse(s);     
        reverse(s.begin(), s.end());
        return s;
    }
    
    char findKthBit(int n, int k) {
        map<int, string> m;
        string current = "0";
        for (int i=2; i<=n; i++) {
            current += "1" + reverseInverse(current);
        }
        return current[k-1];
    }
};