/*problem link: https://codeforces.com/problemset/problem/1070/H
input:
4
test
contests
test.
.test
6
ts
.
st.
.test
contes.
st
output:
1 contests
2 .test
1 test.
1 .test
0 -
4 test.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
map<string,ll>frequency_of_every_substring; //Store the frequency of all substrings of all given strings
map<string,string>matched_given_string; //the one representative matched string for every substring
int main()
{
    ll i,j,m,n,t,k;
    cin>>n;
    vector<string>given_strings(n); //store the given strings

    for(i=0; i<n; i++)
    {
        cin>>given_strings[i];
        map<string,ll>temp;
        //slice the substring, store its main string and increase the frequency
        for(j=1; j<=given_strings[i].size(); j++)
        {
            for(k=0; k<given_strings[i].size(); k++)
            {
                if(k+j>given_strings[i].size())
                    break;
                string test_sub_str = given_strings[i].substr(k,j);
                if(temp.find(test_sub_str)==temp.end())
                {

                    temp[test_sub_str]=1;
                    matched_given_string[test_sub_str]=given_strings[i];
                    frequency_of_every_substring[test_sub_str]++;
                }
            }
        }
    }
    ll query;
    cin>>query;
    while(query--)
    {
        string sub_str;
        cin>>sub_str;
        if(frequency_of_every_substring[sub_str]==0)
            cout<<0<<" -"<<endl;
        else
        {
            cout<<frequency_of_every_substring[sub_str]<<" "<<matched_given_string[sub_str]<<endl;
        }
    }
}
//Audity Ghosh
