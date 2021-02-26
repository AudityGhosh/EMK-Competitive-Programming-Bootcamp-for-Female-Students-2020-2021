/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1048
input:
1
3
4
60
70
50
2
output:
1
2
3
3
4
27
4
I have solved this using the noob way as the time limit was in favour. Sort and get the median*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
  ll i,j,k,m,n,t;
  vector<ll>v;
  while(cin>>n)
  {

      v.push_back(n);
      sort(v.begin(),v.end());
      if(v.size()%2!=0)
        cout<<v[v.size()/2]<<endl;
      else
      {
          k=v.size()/2;
          ll med = (v[k]+v[k-1])/2;
          cout<<med<<endl;
      }
  }
}
//Audity Ghosh
