class Solution {
public:
    int minimumPushes(string word) {
        map<char,int> mp;
        
        for(char ch : word){
            mp[ch]++;
        }
        
        vector<int> vec;
        
        for(auto it : mp){
            vec.push_back(it.second);
        }
        
        sort(vec.begin(), vec.end(), greater<int>());
        
        int ans = 0;
        
        for(int i = 0; i < vec.size(); i++){
            int cost = (i / 8) + 1;
            ans += vec[i] * cost;
        }
        
        return ans;
    }
};