class Solution {
public:
    int maxDepth(string s) {
        int ans = 0;
        int res = 0;
       for(char ch:s){
            if(ch=='('){
                ans++;
                res = max(ans,res);
            }
            else if(ch==')'){
                ans--;
            }
       }
       return res; 
    }
};