/*problem link: https://www.hackerrank.com/challenges/cpp-lower-bound/problem
Sample Input

 8
 1 1 2 2 6 9 9 15
 4
 1
 4
 9
 15
Sample Output

 Yes 1
 No 5
 Yes 6
 Yes 8

 All clues are given in the question */
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t;
    cin>>n;
    vector<ll>v(n);
    for(i=0; i<n; i++)
        cin>>v[i];
    ll q;
    cin>>q;
    while(q--)
    {
        cin>>k;
        std::vector<ll>::iterator low;
        low=std::lower_bound (v.begin(), v.end(), k);

        if(v[low- v.begin()]==k)
            cout<<"Yes "<<low-v.begin()+1<<endl;
        else
            cout<<"No "<<low-v.begin()+1<<endl;


    }

}
//Audity Ghosh
