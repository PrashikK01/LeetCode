class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int j = n-1;
        for(int i=0;i<n;i++){
            if(j<=i){
                return;
            }
            else{
            swap(s[i],s[j]);
            j--;
            }
        }
    }
};