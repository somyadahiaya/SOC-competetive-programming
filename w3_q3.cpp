#include <bits/stdc++.h>
typedef long long ll;
#define REP(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;

const ll m = 1000000000+7;

int main()
{
    ll n;
    cin >> n;
    vector<ll> dp(n+1,0);
    dp[0]=1;
    REP(i,1,n)
    {
        for(int j=1;j<=6 && j<=i;j++)
        {
            dp[i]=(dp[i]+dp[i-j])%m;
        }
    }

      cout << dp[n]%m <<"\n";             
}
