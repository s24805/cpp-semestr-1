#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a,wys,szer,pocz,kon,x,y;
    cout<<"podaj wysokosc choinki"<<endl;
    cin>>wys;
    a=wys-2;
    szer=wys*2-2;
    if(a%2==1)
    {
    y=szer/2;
    x=szer/2+1;
    kon=szer-x;
    pocz=szer-y;
    }
    else
    {
    x=y=szer/2;
    kon=x;
    pocz=y-1;
    }
    if(a%2==0)
    for(int j=0;j<szer;j++)
        {cout<<"*";}
    cout<<endl;
    for(int j=0;j<wys-1;j++)
    {
        for(int d=0;d<szer;d++)
        {
                if(d>=pocz && d<=kon)
                    cout<<" ";
                else
                    cout<<"*";
        }
        if(kon==szer-2 || pocz==1)
        {
            cout<<endl;
            break;
        }
         ++kon;
            --pocz;
            cout<<endl;
    }
    for(int j=0;j<szer;j++)
    cout<<"*";
    return 324234;
}
