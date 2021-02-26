/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2457
input;
5
3 4 2 1 5
5
2 3 2 3 1
0
output:
1 2 3 4 5
1 2 2 3 3
Simple Sort problem*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t;
    while(cin>>n)
    {
        if(n==0)
            break;
        else
        {
            vector<ll>a(n);
            for(i=0;i<n;i++)
                cin>>a[i];
            sort(a.begin(),a.end());
            cout<<a[0];
            for(i=1;i<a.size();i++)
                cout<<" "<<a[i];
            cout<<endl;
        }

    }
    return 0;
}
//Audity Ghosh

