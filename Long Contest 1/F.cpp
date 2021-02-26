/*problem link: https://www.hackerrank.com/challenges/cpp-sets/problem
input:
8
1 9
1 6
1 10
1 4
3 6
3 14
2 6
3 6
output:
Yes
No
No
All hints are given in the question.
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll i,j,k,m,n,t,q;
    set<ll>my_set;
    cin>>q;
    while(q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>m;
            my_set.insert(m);
        }
        else if(t==2)
        {
            cin>>m;
            my_set.erase(m);
        }
        else
        {
            cin>>m;
            if(my_set.find(m)!=my_set.end())
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;

        }
    }
}
//AudityGhosh
