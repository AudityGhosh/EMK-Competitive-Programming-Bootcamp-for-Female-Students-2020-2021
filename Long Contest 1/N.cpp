/*problem : https://www.hackerrank.com/challenges/vector-erase/problem
Sample Input

6
1 4 6 2 8 9
2
2 4
Sample Output

3
1 8 9

Simple vector erase problem, go through question carefully*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t;
    cin>>n;
    vector<ll>v(n);
    for(i=0;i<n;i++)
        cin>>v[i];
    cin>>m;
    v.erase(v.begin()+m-1);
    cin>>i>>j;
    v.erase(v.begin()+i-1,v.begin()+j-1);
    cout<<v.size()<<endl;
    cout<<v[0];
    for(i=1;i<v.size();i++)
        cout<<" "<<v[i];
    cout<<endl;

}
//Audity Ghosh

