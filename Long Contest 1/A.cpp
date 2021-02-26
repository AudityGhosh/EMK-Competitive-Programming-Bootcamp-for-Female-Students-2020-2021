/*
problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3987
Sample Input
11245
91321150448
1226406
0
Sample Output
11
1321
2
 100,000 is max , so if we get all the prime numbers upto this and convert them to string and check reversely if substring of the given string,
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n=100000;
vector<string>primes;
void SieveOfEratosthenes(ll n)
{

    bool prime[n+1];
    memset(prime, true, sizeof(prime));

    for (ll p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (ll i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }


    for (ll p=2; p<=n; p++)
        if (prime[p])
        {
            std::string s = std::to_string(p);
            primes.push_back(s);
        }
}
int main()
{
    ll i,j,k,m,t;
    SieveOfEratosthenes(n);
    /*for(i=0;i<primes.size();i++)
         cout<<primes[i]<<endl;*/
    string s;
    while(cin>>s)
    {
        if(s=="0")
            break;
        else
        {
            for(i=primes.size()-1; i>=0; i--)
            {
                size_t found = s.find(primes[i]);
                if (found != string::npos)
                {
                    cout<<primes[i]<<endl;
                    break;
                }
            }
        }
    }
}
//Audity Ghosh

