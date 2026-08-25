class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>ans;
        for(auto it : nums){
            if(it%k==0){
                ans.insert(it);
            }
        }
        int i = 1;
        for(auto it : ans){
            if(i * k == it){
                i++;
            }
            else{
                return i*k;
            }
        }
        return i*k;
    }
};