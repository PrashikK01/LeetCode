class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i=0;i,i<nums.size();i++){
            sum = sum + nums[i];
        }
        int lefts = 0;
        for(int i=0;i<nums.size();i++){
            int rights = sum-lefts-nums[i];
            if(lefts==rights){
                return i;
            }
            lefts = lefts+nums[i];
        }
        return -1;
    }
};