class Solution {
public:
    int maxArea(vector<int>& height) {
        int j = height.size()-1;
        int ans = 0;
        int i = 0;
        while(i<j){
            int mn = min(height[i],height[j]);
            int ans1 = mn * (j-i);
            ans = max(ans1,ans);
            if(height[i] >= height[j])
                j--;
            else 
                i++;
        }
        
        return ans;
    }
};