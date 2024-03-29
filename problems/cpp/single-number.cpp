class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int>mp;
        int ans = -1;
        for(int i = 0; i < nums.size(); i++){
            mp[nums[i]] ++;
        }
        for(auto it: mp){
            if(it.second == 1){
                ans = it.first;
                break;
            }
        }
        return ans;
    }
};