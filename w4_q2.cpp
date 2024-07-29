#include <bits/stdc++.h>
#include<iostream>
#define REP(i,a,b) for(long long int i=a;i<=b;i++)
using namespace std;

const long long int m = 1000000000L+7;
const int TWO_MOD_INV = 500000004;

long long int sum(long long int l,long long int n)
{
    return (((n-l+1)%m*(n+l)%m)*TWO_MOD_INV%m);

}

int main()

{
    ios::sync_with_stdio(0);
    cin.tie(0);

   long long int n;
    cin >> n;
    long long int ans=0;
    long long int i=1;
      
        while(i<=n)
        {
            // cout << "i" << i <<"\n";
            long long int num=n/i; //number of times the divisor i comes 
            // cout << num <<"\n";
            long long int largest_same=n/num;   // largest number for which the num i is same
            // cout << largest_same <<"\n";
            ans =(ans + sum(i,largest_same)*num)%m;

            // cout << part <<"\n";
            i=largest_same+1;
        

        }
        
    
    cout << ans%m << "\n";
}