#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    float pier;
    int pet=0,x,y=1;
    cout<<"podaj liczbe"<<endl;
    cin>>x;
    pier=sqrt(x);
    int T[x]={0};
    for(int i=2;i<=pier;i++)
    {
        if(T[i]==1)
            continue;
        if(x%i==0)
        {
            cout<<"najmniejszym dzielnikiem jest:   "<<i;
            return 121;
        }
        if(x%i!=0)
        {
            for(int j=i;j<x;j=j*y)
            {
                T[j]=1;
                y++;
            }
        }
        y=1;
        pet++;
    }
    cout<<"liczba jest pierwsza"<<endl;
    cout<<"wykonano w "<<pet<<" petlach";
    return 123123;
}
