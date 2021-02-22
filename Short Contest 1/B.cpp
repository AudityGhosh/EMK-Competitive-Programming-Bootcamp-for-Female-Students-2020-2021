/*Problem Link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1753
input:
2
40 20
20 40
output:
30 10
impossible

if diff is greater than sum, then print impossible
    print those two numbers whose sum and difference are given*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,m,n,t,a,b;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        if(a<b)
        {
            cout<<"impossible"<<endl;
        }
        else
        {
            k=0;
            for(i=0; i<=a; i++)
            {

                j=i+b;
                if(i+j==a && j-i==b)
                {
                    k++;
                    cout<<j<<" "<<i<<endl;
                    break;
                }
            }
            if(k==0)
                cout<<"impossible"<<endl;
        }
    }
}
//AudityGhosh

