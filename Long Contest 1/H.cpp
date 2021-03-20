/*problem link: https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2904
Sample Input
1
sameezahur 20 21
sohelh 18 9
jaan 17 86
sidky 16 36
shamim 16 18
shadowcoder 12 9
muntasir 13 4
brokenarrow 16 16
emotionalblind 16 12
tanaeem 20 97


Sample Output
Case 1:
(emotionalblind, jaan, sameezahur, sohelh, tanaeem)
(brokenarrow, muntasir, shadowcoder, shamim, sidky)

*/

#include<bits/stdc++.h>
using namespace std;
struct player
{
    string name;
    int attack;
    int defend;
};
bool cmp(player a,player b)
{
    if(a.attack>b.attack)  //maximize attack power
        return true;
    if(a.attack==b.attack && a.defend<b.defend) //if same minimize defend power
        return true;
    if(a.attack==b.attack && a.defend==b.defend && a.name<b.name) // if both same choose smaller name
        return true;
    return false;
}
bool cmp_name(player a,player b)
{
    return a.name<b.name;
}
int main()
{
    int i,j,k,m,n,t;
    cin>>t;
    for(int o=1; o<=t; o++)
    {
        player a[10];
        for(i=0; i<10; i++)
        {
            cin>>a[i].name>>a[i].attack>>a[i].defend;
        }
        sort(a,a+10,cmp);
        /*cout<<"****Sort****"<<endl;
        for(i=0;i<10;i++)
        {
            cout<<a[i].name<<" "<<a[i].attack<<" "<<a[i].defend<<endl;
        }*/
        sort(a,a+5,cmp_name);

        sort(a+5,a+10,cmp_name);
        cout<<"Case "<<o<<":"<<endl;
        cout<<"("<<a[0].name;
        for(i=1; i<5; i++)
            cout<<", "<<a[i].name;
        cout<<")"<<endl;
        cout<<"("<<a[5].name;
        for(i=6; i<10; i++)
            cout<<", "<<a[i].name;
        cout<<")"<<endl;

    }
}
//Audity Ghosh
