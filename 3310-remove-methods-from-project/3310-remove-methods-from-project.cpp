class Solution{
public:
    vector<int> remainingMethods(int n,int k,vector<vector<int>>& invocations){
        vector<vector<int>>adj(n);
        for(auto &x:invocations){
            adj[x[0]].push_back(x[1]);
        }
        vector<int>suspicious(n,0);
        function<void(int)>dfs=[&](int node){
            suspicious[node]=1;
            for(int next:adj[node]){
                if(!suspicious[next])
                    dfs(next);
            }
        };
        dfs(k);
        for(auto &x:invocations){
            if(!suspicious[x[0]]&&suspicious[x[1]]){
                vector<int>ans;
                for(int i=0;i<n;i++)
                    ans.push_back(i);
                return ans;
            }
        }
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(!suspicious[i])
                ans.push_back(i);
        }
        return ans;
    }
};