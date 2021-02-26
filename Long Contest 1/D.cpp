/*problem link: https://acm.timus.ru/problem.aspx?space=1&num=1001
input
 1427  0

   876652098643267843
5276538

output
2297.0716
936297014.1164
0.0000
37.7757

Only challenge is to take input right*/
#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector<ll>v;
    ll i,j,k,m,n,t;
    string str;
    while(getline(cin,str))
    {

        {
            stringstream ss;
            ss <<str;
            string temp;
            ll found;
            while (!ss.eof())
            {
                ss >> temp;
                if (stringstream(temp) >> found)
                    v.push_back(found);
                temp = "";
            }
        }

    }
    reverse(v.begin(),v.end());
    for(i=0; i<v.size(); i++)
    {
        double g = sqrt(v[i]);
        cout<<fixed<<setprecision(4)<<g<<endl;
    }
}
//Audity Ghosh

