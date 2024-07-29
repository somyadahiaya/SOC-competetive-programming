#include<iostream>
#include<vector>
#define REP(i,a,b) for(LL i=a; i<=b ;i++)
typedef long long LL;
using namespace std;



LL ways(LL n)
{
    LL count=0;
    if(n>=4)
    {
        count=((n-4)*4+2*5)*(n-2)+4+(n-4)*2;
    }
    else if(n==3)
    {   
        count=8;
    }
    n*=n;
    LL total=(n*(n-1))/2;
    return total-count;    
    
}

int main()
    {
        LL n;
        cin >> n;
        REP(i,1,n)
        {
            cout << ways(i) << "\n";
        }
    }