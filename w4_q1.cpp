#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
using namespace std;

const long long int m = 1000000000+7;

int expo(int x,int n,int l)

{
    if(n==0)
        return 1%l;
    long long int u=expo(x,n/2,l);
    u=(u*u)%l;
    if(n%2==1)
        u=(u*x)%l;
    return u;         
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    REP(i,0,n)
    {
    int a,b,c;
    cin >> a >> b >> c;

    int k = expo(b,c,m-1);
    int ans = expo(a,k,m);
    cout << ans << "\n";
    }
}