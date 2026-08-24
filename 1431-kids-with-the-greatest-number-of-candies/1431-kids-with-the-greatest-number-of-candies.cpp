class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        auto mx = max_element(candies.begin(),candies.end());
        // int mxe = mx;
        vector <bool> ans;
        for(int i=0;i<candies.size();i++){
            if(candies[i]+extraCandies >= mx[0]){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }
        return ans;
    }
};