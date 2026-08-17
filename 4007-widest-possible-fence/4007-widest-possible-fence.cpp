class Solution {
public:
    int maximumWidth(vector<int>& planks) {
        unordered_map<long long,int> freq;

        for(int x:planks)
            freq[x]++;

        vector<pair<long long,int>> v;

        for(auto it:freq)
            v.push_back({it.first,it.second});

        unordered_map<long long,int> pairs;

        int n=v.size();

        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                long long h=v[i].first+v[j].first;

                if(i==j)
                    pairs[h]+=v[i].second/2;
                else
                    pairs[h]+=min(v[i].second,v[j].second);
            }
        }

        int ans=1;

        for(auto it:freq)
            ans=max(ans,it.second);

        for(auto it:pairs){
            long long h=it.first;

            int cnt=it.second;

            if(freq.count(h))
                cnt+=freq[h];

            ans=max(ans,cnt);
        }

        return ans;
    }
};