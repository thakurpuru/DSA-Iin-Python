class Solution {
public:
    double myPow(double x, int m) {
        bool check=false;
        long long n=m;
        if(n<0){
            check=true;
            n=-n;
        }
        double ans=1.0;
        while(n>0){
            if((n&1)) ans*=x;
            x*=x;
            n>>=1;
        }
        if(check) return 1/ans;
        return ans;
    }
};