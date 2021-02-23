/*problem link: https://acm.timus.ru/problem.aspx?space=1&num=1209
input:
4
3
14
7
6
output:
0 0 1 0
*/
#include<bits/stdc++.h>
#define ll long long
using namespace std;

map<ll,ll>yes_or_no;
vector<ll>ans;
//observe the sequence and assign the pre-calculated values.
void create_array()
{
    ll a = 1;
    ll i = 1;
    while (a <= 2147483647)
    {
        yes_or_no[a]=1;
        a = a + i;    //2 4 7 11 16
        i++;      //2 3 4 5 6
    }
}

void solve()
{
    ll n, q,k;
    cin >> n;

    for (ll i=0; i<n; i++)
    {
        cin >> q;
        ans.push_back(yes_or_no[q]);


    }
    cout<<ans[0];
    for(ll o=1; o<ans.size(); o++)
        cout<<" "<<ans[o];
    cout<<endl;

}

int main()
{
    create_array();
    solve();
    return 0;
}
