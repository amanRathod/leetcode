
class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& A) {
        
        
        int n = A.size();
        if(n <3)
            return 0;
        int p = 0;
        int q = 0;
        bool flag =false;
        
        for(int i = 1;  i < n; ++i){
            if(A[i] - A[i-1] == A[i+1] - A[i]){
                p = i-1;
                q = i+1;
                flag = true;
                break;
            }
        }
        if(flag == false){
            return 0;
        }
        q++;
        int count1 = 1;
        while(q < n){
            int count = 1;
                if(A[q] - A[q-1] == A[q-1] - A[q-2]){
                    count = (q-p-1);
                    count1 += count;
                }
                else{
                     for(int i = q+1;  i < n; ++i){
                        if(A[i] - A[i-1] == A[i+1] - A[i]){
                            p = i-1;
                            q = i+1;
                            count1 +=1;
                            break;
                        }
                    }
                }
            q++;
        }
        return count1;
    }
};
