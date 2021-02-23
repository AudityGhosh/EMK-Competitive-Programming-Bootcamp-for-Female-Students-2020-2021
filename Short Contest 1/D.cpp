/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=614
input:
3
([])
(([()])))
([()[]()])()
output:
Yes
No
Yes
*/
#include<bits/stdc++.h>
using namespace std;
//validity check function
bool check(string s)
{
    int i,j,k,m,n;
    stack<char>Stack;

    for(i=0; i<s.size(); i++)
    {
        if(s[i]=='(' || s[i]=='[') //if it is opening bracket, push
            Stack.push(s[i]);
        else
        {
            if(((!Stack.empty())&&(Stack.top()=='('))&&(s[i]==')')) //if stack is not empty and we found closing bracket for top opening bracket
            {
                Stack.pop();
            }
            else if(((!Stack.empty())&&(Stack.top()=='['))&&(s[i]==']'))//see the last comment
            {
                Stack.pop();
            }
            else
                return false;
        }
    }
    if(Stack.size()==0) //everything is popped, then the stack size will be empty
        return true;
    else
        return false;

}
int main()
{
    string s;
    char c;
    int i,j,k,m,n,test;
    cin>>test;
    cin.ignore(256, '\n');//there includes a character while using getline after cin
    while(test--)
    {

        getline(cin,s);
        if(s[0]!='('&&s[0]!=')'&&s[i]!='['&&s[i]!=']')//if it is an empty string
            cout<<"Yes"<<endl;

        else if(check(s)==true) //check if it is valid
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
//Audity Ghosh
