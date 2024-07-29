#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
#include<vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    vector<pair<int,int>> task(n);
    
    REP(i,0,n)
    {
        cin >> task[i].first >> task[i].second ;
    }

    sort(task.begin(),task.end());
    
    long long rewards=0, finishtime=0;

    REP(i,0,n)
    {
        finishtime += task[i].first;
        rewards += task[i].second-finishtime;
    }

    cout << rewards << "\n";

}