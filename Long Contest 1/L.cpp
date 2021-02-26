/*
problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1756
Sample Input
Adventures in Disneyland
Two blondes were going to Disneyland when they came to a fork in the
road. The sign read: "Disneyland Left."
So they went home.
Sample Output
a
adventures
blondes
came
disneyland
fork
going
home
in
left
read
road
sign
so
the
they
to
two
went
were
when
Beware ! what is the word starts with number? will you consider them?
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,m,n,t;
    vector<string>v;
    string s,temp;
    while(getline(cin,s))
    {

        temp = "";

        for(i=0; i<s.size(); i++)
        {

            if(temp.size()==0)
            {
                if(s[i]>='a' && s[i]<='z')
                    temp = temp + s[i];
                else if(s[i]>='A' && s[i]<='Z')
                    temp=temp+s[i];
                else
                    continue;
            }
            else
            {
                if(s[i]>='a' && s[i]<='z')
                    temp = temp + s[i];
                else if(s[i]>='A' && s[i]<='Z')
                    temp=temp+s[i];
                else
                {
                    //cout<<temp<<endl;
                    v.push_back(temp);
                    temp="";
                }
            }
        }
        if(temp.size()!=0)
        {
            v.push_back(temp);
        }



    }
    for(i=0; i<v.size(); i++)
    {
        transform(v[i].begin(), v[i].end(), v[i].begin(), ::tolower); //lowercase all strings
    }
    sort( v.begin(), v.end() ); //sort them lexicographically
    v.erase( unique( v.begin(), v.end() ), v.end() ); //erase the duplicates
    for(i=0; i<v.size(); i++)
        cout<<v[i]<<endl;

}
//Audity Ghosh

