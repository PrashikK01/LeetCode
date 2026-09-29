class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int ans = 0,maxx=0;
        for(int i=0;i<n;i++){
            if(nums[i]==1){
                ans++;
                maxx = max(ans,maxx);
            }
            else{
                ans = 0;
            }
        }
        return maxx;
    }
};