#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i=a;i<b;i++)
#include<vector>
typedef long long ll;
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long machines,products;
    cin >> machines >> products;

    vector<long long> unit(machines);
    REP(i,0,machines)
    {
        cin >> unit[i];
    }

    ll high = 1e+18;
    ll low = 1;
    ll middle;
    
}
