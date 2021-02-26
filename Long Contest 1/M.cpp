/*Write a program that will remove all duplicates from a sequence of integers and print the list of unique
integers occuring in the input sequence, along with the number of occurences of each.
problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=425
Sample Input
3 1 2 2 1 3 5 3 3 2
Sample Output
3 4
1 2
2 3
5 1
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll i,j,k,m,n,t;
    vector<ll>v;
    unordered_map<ll,ll>mymap;
    while(cin>>m)
    {


        v.push_back(m);
        mymap[m]++;

    }
    for (int i = 0; i < v.size(); i++)
    {
        if (mymap[v[i]] != -1)
        {
            cout << v[i] << " " << mymap[v[i]] << endl;
            mymap[v[i]] = -1;
        }
    }
}
//Audity Ghosh

