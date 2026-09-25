class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int>ans;
        int left = 0, right = numbers.size()-1;
        while(left<right){
            int sum = numbers[left]+numbers[right];
            if(sum==target){
                left = left + 1;
                right = right + 1;
                ans.push_back(left);
                ans.push_back(right);
                return ans;
            }
            else if(sum>target){
                right--;
            }
            else{
                left++;
            }
        }
        return ans;
    }
};