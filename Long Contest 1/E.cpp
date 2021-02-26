/*problem link: https://www.hackerrank.com/challenges/cpp-maps/problem
input:
7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
output:
30
20
0

All the clues are given in the question, you have to just implement it.

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,int>my_map;
    int i,j,k,m,n,t,q;
    string s;
    cin>>q;
    while(q--)
    {
        cin>>t;
        if(t==1)
        {
            cin>>s;
            cin>>m;
            if(my_map.find(s)!=my_map.end())
            {
                my_map[s]=my_map[s]+m;
            }
            else
                my_map.insert(make_pair(s,m));
        }
        else if(t==2)
        {
            cin>>s;
            my_map.erase(s);
        }
        else
        {

            cin>>s;

            if(my_map.find(s)==my_map.end())
                cout<<0<<endl;
            else
                cout<<my_map[s]<<endl;
        }
    }
}
//AudityGhosh
