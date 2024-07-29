#include <bits/stdc++.h>
#define REP(i,a,b) for(long long i=a;i<b;i++)
#include<vector>
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

    sort(unit.begin(),unit.end());
    long long tmax=unit[0]*products;
    REP(i,0,machines)
    {
        while(unit[i]==unit[i+1]) i++;
        if(tmax<unit[i]) break;
        for(long long time=tmax; time>=0 ;time--)
        {
            long long maxproducts=0;
            for(long long k=0;k<=i;k++)
            {
                maxproducts += time/unit[k];
            }
            if(maxproducts<products)
            {
                tmax=time;
                break;
            }
        }
    }
    cout << tmax+1 << "\n";
    
}