/*problem link:https://www.hackerrank.com/challenges/vector-sort/problem
Sample Input

5
1 6 10 8 4
Sample Output

1 4 6 8 10
Simple vector sort*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t;
    cin>>n;

    vector<ll>a(n);
    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a.begin(),a.end());
    cout<<a[0];
    for(i=1; i<a.size(); i++)
        cout<<" "<<a[i];
    cout<<endl;

    return 0;

}
//Audity Ghosh


