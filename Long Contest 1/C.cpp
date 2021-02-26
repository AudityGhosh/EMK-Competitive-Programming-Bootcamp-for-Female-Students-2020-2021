/*problem link: https://codeforces.com/gym/100283/problem/G
Input
3
2
12
100
Output
Case 1: Bakkar
Case 2: Wahdan
Case 3: Bakkar
If you test some testcases on your own, you will realise only n divisible by 3 will have Wahdan as answer*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    freopen("jenga.in", "r", stdin);
    ll i,j,k,m,n,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        if(n%3==0)
            cout<<"Case "<<i+1<<": Wahdan"<<endl;
        else
            cout<<"Case "<<i+1<<": Bakkar"<<endl;
    }
}
//Audity Ghosh
