/*problem link: https://codeforces.com/problemset/problem/749/A
input:
5
output:
2
2 3
Those numbers who are not divisible by 2, they will have 3 as the last one"*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,m,n,t;
    vector<ll>ans;
    cin>>n;
    if(n%2==0)
    {
        for(i=0; i<(n/2); i++)
            ans.push_back(2);
    }
    else
    {
        for(i=0; i<(n-1)/2 -1; i++)
            ans.push_back(2);
        ans.push_back(3);
    }
    cout<<ans.size()<<endl;
    cout<<ans[0];
    for(i=1; i<ans.size(); i++)
        cout<<" "<<ans[i];
    cout<<endl;

}
//Audity Ghosh
