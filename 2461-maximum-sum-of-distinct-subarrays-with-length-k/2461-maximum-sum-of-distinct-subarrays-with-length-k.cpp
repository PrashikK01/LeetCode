class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long max_sum = 0;
        unordered_map<int,int>mp;
        for(int i=0;i<k;i++){
           mp[nums[i]]++;
           sum += nums[i];
        }
        if(mp.size()==k){
            max_sum = sum;
        }
        for(int j = k;j<nums.size();j++){
            sum = sum + nums[j];
            sum = sum - nums[j-k];
            mp[nums[j-k]]--;
            mp[nums[j]]++;
            if(mp[nums[j-k]] == 0){
                mp.erase(nums[j-k]);
            }
            if(mp.size()==k){
                max_sum = max(max_sum,sum);
        }
        }
        return max_sum;
    }
};