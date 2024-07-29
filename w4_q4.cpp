#include <bits/stdc++.h>
#include<iostream>
typedef long long ll;
#define REP(i,a,b) for(ll i=a;i<=b;i++)
using namespace std;
vector<ll> factorials;

const long long int MOD = 1000000007;

int mul(int a, int b) {
    return (1LL * a * b) % MOD;
}


ll modinv(ll n)
{
    ll b = MOD-2;
    ll result = 1;
    while(b>1)
    {
         ll k=mul(n,n);
        result=mul(result,k)%MOD;
        if(b%2==1)
        {
            result=mul(result,n)%MOD;
        }
        b=b/2;
    }
    return result;
}


int main()
{
    cout << modinv(2) << "\n";
    int k = (modinv(2)*2)%MOD;
    cout << k;
}