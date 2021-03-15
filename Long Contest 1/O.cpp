/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=3139
Sample Input
This_is_a_[Beiju]_text
[[]][][]Happy_Birthday_to_Tsinghua_University
Sample Output
BeijuThis_is_a__text
Happy_Birthday_to_Tsinghua_University
When [ 'home' key is pressed following chars will be added in the begin of the list until ']'
and ']' 'end' is pressed following chars will be added in the end of the list*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s)
    {
        list<char>mylist;

        int i,j,k,m,n,t;
        char c;
        list<char>::iterator it = mylist.begin();
        for(i=0;i<s.size();i++)
        {
            c=s[i];
           if(c=='[')
                it=mylist.begin();
           else if(c==']')
            it=mylist.end();
           else
            mylist.insert(it,c);
        }
        for(it=mylist.begin();it!=mylist.end();it++)
            cout<<*it;
        cout<<endl;

    }
}
//AudityGhosh
