/*problem link: https://www.spoj.com/problems/CSUMQ/en/
Input:
3
1 4 1
3
1 1
1 2
0 2
Output:
4
5
6
This problem has been solved using prefix sum,we have saved each sum of numbers upto a number in separate vector
*/

#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,k,m,n,t,x,y;
    cin>>n;
    vector<ll>v(n);
    for(i=0; i<n; i++)
        cin>>v[i];
    vector<ll>sum(n);
    sum[0]=v[0];
    for(i=1; i<n; i++)
        sum[i]=v[i]+sum[i-1];

    ll query;
    cin>>query;
    while(query--)
    {
        cin>>x>>y;
        cout<<sum[y]-sum[x]+v[x]<<endl;
    }
}
//AudityGhosh
