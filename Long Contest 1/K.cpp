/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=4270
input:
3
ko te kader molla
tui rajakar tui rajakar
tumi ke ami ke
garo chakma bangali
jalo re jalo
agun jalo
2
jalo re jalo
ko te kader molla
output;
agun jalo
tui rajakar tui rajakar


simple map problem, you will be given slogans in pair and you will be asked for the second one of the pair of strings later.
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string,string>my_map;
    char c;
    int i,j,k,m,n,t,q;
    string s1,s2,s;
    cin>>n;
    cin.ignore(256, '\n');

    for(i=0; i<n; i++)
    {

        getline(cin,s1);

        getline(cin,s2);
        my_map.insert(make_pair(s1,s2));


    }
    /* map<string, string>::iterator itr;
     for (itr =my_map.begin(); itr != my_map.end(); ++itr)
         cout << '\t' << itr->first
              << '\t' << itr->second << '\n';*/

    cin>>q;
    cin.ignore(256, '\n');
    while(q--)
    {
        getline(cin,s);
        cout<<my_map[s]<<endl;
    }

}
//AudityGhosh

