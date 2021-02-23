/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=208
input:
"To be or not to be," quoth the Bard, "that
is the question".
The programming contestant replied: "I must disagree.
To `C' or not to `C', that is The Question!"
output:
``To be or not to be,'' quoth the Bard, ``that
is the question''.
The programming contestant replied: ``I must disagree.
To `C' or not to `C', that is The Question!''

Easy problem , just observe the sequence of quotation marks.
*/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,j,k,m,n,t,a,b,c=0;
    char s[50000];
    while(gets(s))
    {
        for(i=0; i<strlen(s); i++)
        {
            if(s[i]=='"')

            {
                if(c%2==0)
                    cout<<"``";
                else
                    cout<<"''";
                c++;
            }
            else
                cout<<s[i];

        }
        cout<<endl;
    }
}
//Audity Ghosh

