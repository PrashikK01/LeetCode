class Solution {
public:
    bool sumGame(string num) {
        int n=num.size();
        int leftq=0,rightq=0;
        int lefts=0,rights=0;
        for(int i=0;i<n/2;i++){
            if(num[i]=='?')
                leftq++;
            else
                lefts+=num[i]-'0';
        }
        for(int i=n/2;i<n;i++){
            if(num[i]=='?')
                rightq++;
            else
                rights+=num[i]-'0';
        }
        return ((leftq+rightq)%2==1 ||lefts-rights!=9*(rightq-leftq)/2);
    }
};