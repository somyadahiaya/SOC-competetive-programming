#include<iostream>
#include<vector>
using namespace std;
#define REP(i,a,b) for(int i=a; i<b ;i++)
typedef long long ll;
int main()
{
    int n;
    vector<ll> arr;
    cin >>n;
    REP(i,0,n)
    {
        ll k;
        cin >> k;
        arr.push_back(k);
    }
    ll moves=0;
   REP(i,0,n-1)
   {
    if(arr[i]>arr[i+1])
    {
         moves+=arr[i]-arr[i+1];
        arr[i+1]+=arr[i]-arr[i+1];
    }
    else
    {
        continue;
    }
   } 

    cout << moves << "\n";
   

}