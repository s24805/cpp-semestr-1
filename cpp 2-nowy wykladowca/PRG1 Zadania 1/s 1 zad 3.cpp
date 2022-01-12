#include <iostream>
using namespace std;
int main()
{
    string a,b;
    cout<<" podaj imie nr 1"<<endl;
    cin>>a;
    cout<<" podaj imie nr 2"<<endl;
    cin>>b;
    if(a.size()>b.size())
        cout<<"imie nr 1 >nr 2!";
    if(a.size()<b.size())
        cout<<"imie nr 1 <nr 2...";
    if(a.size()==b.size())
        cout<<"imie nr 1 =nr 2.";
return 213;
}

