#include <bits/stdc++.h>
#include<iostream>
typedef long long ll;
#define REP(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
vector<ll> factorials;

const long long int m = 1000000000L+7;

ll fac(ll num )
{
    ll result=1;
    REP(i,1,num)
    {
        result=(result*i)%m;
        factorials.push_back(result);
    }
    return result%m;
}

ll pow(ll num,ll exp)
{
    if(exp==0)
    return 1;
    ll u = pow(num,exp/2);
    u=(u*u)%m;
    if(exp%2==1)
    {
        u=(u*num)%m;
    }
    return u;

}

ll modinv(ll num)
{
    return pow(num,m-2)%m;
}

ll coeff(ll n , ll r)
{
    if(r==0 || r==n)
    return 1;
    ll u=factorials[n];
    ll k=modinv(factorials[n-r]);
    ll o=modinv(factorials[r]);
    return (u%m*k%m*o%m);
}


int main () {
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    vector<pair<int, int>> pairs;
    int a, b;
    for (int i = 0 ; i < n ; i ++ ) {
        cin >> a >> b;
        pairs.push_back({a, b});
    }

    int max_number = (*max_element(pairs.begin(), pairs.end())).first;
    int trial = fac(max_number);
     cout << trial;

    for (int i = 0 ; i < n ; i ++ ) {
        cout << coeff(pairs[i].first, pairs[i].second) << '\n';
    }


}
