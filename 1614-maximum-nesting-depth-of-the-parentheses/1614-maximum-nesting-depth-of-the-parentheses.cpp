class Solution {
public:
    int maxDepth(string s) {
        int depth = 0;
        int maxd = 0;
       for(char ch:s){
            if(ch=='('){
                depth++;
                maxd = max(depth,maxd);
            }
            else if(ch==')'){
                depth--;
            }
       }
       return maxd; 
    }
};