//==>Method 1

class Solution {
public:
    double myPow(double x, int n, double res = 1) {
        return n ? myPow(x * x, n / 2, n % 2 ? (n > 0 ? res * x : res / x) : res) : res;
    }
};


//==>Method 2 
class Solution {
public:
    double myPow(double x, int nn)
    {
        long long int n=nn;
        double ans=1;
        if(n<0)
            n=-1*n;
        
        while(n)
        {
            if(n%2==0)
            {
                x=x*x;
                n=n/2;
            }
            else
            {
                ans=ans*x;
                n=n-1;
            }
        }
        if(nn<0)
            return (double)1/double(ans);
        else
            return ans;
    }
};