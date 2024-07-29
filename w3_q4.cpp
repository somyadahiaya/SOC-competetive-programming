#include <bits/stdc++.h>
#define REP(i,a,b) for(int i=a;i<b;i++)
#include<vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string love , movie;
    cin >> love >> movie;


    int n= love.length();
    int m = movie.length();
    int distance[n+1][m+1];
    REP(i,0,m+1)
    {
        distance[0][i]=i;
    }

    REP(i,0,n+1)
    {
        distance[i][0]=i;
    }

      for(int i=1;i<n+1;i++)
   {
        for(int j=1;j<m+1;j++)
        {
            distance[i][j]=0;
        }
   }
    
    
    for(int i=1;i<n+1;i++)
   {
        for(int j=1;j<m+1;j++)
        {
            int cost;
            if(love[i-1]==movie[j-1]) cost=0;
            else cost =1;
            distance[i][j]=min(distance[i][j-1]+1,distance[i-1][j]+1);
            distance[i][j]=min(distance[i][j],distance[i-1][j-1]+cost);
        }
   } 
 
   cout << distance[n][m] << "\n";

}
