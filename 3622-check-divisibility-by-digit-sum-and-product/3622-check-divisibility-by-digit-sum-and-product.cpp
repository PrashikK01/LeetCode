class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int product = 1;
        int n1 = n;
        while(n>0){
            int lastd = n % 10;
            n = n / 10;
            sum = sum + lastd;
            product = product * lastd;
        }
        int ans = sum+product;
        if(n1 % ans == 0){
            return true;
        }
        else{
            return false;
        }
    }
};