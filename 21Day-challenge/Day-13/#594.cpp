
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> map;
        
        for(int i = 0; i < nums.size(); ++i){
            map[nums[i]]++;
        }
        int maxi = 0;
        for(auto it: map){
            if(map.count(it.first-1) > 0){
                maxi = max(maxi, it.second+map[it.first-1]);
            }
        }
        return maxi;
    }
};
