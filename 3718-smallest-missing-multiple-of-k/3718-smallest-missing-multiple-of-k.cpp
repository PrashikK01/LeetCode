class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>ans;
        for(auto it : nums){
            if(it%k==0){
                ans.insert(it);
            }
        }
        int i = k;
        while(ans.count(i)){
            i += k;
        }
        return i;
    }
};