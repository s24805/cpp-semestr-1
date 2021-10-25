#include <iostream>
#include <cmath>
using namespace std;
int main()
// ja nie czytam slajdow;
{
float a,b;
float c;
float e;
int k,x,o,h;
string j;
cout<<"podaj dzialanie (*,/,//,%,**,sqrt,odwr)"<<endl;
cin>>j;
if(j=="*")
{
cout<<"podaj dwie liczby"<<endl;
cin>>a;
cin>>b;
c=a*b;
cout<<c;}
if(j=="/")
{
cout<<"podaj dwie liczby"<<endl;
cin>>a;
cin>>b;
c=a/b;
cout<<c;}
if(j=="//")
{
cout<<"podaj dwie liczby"<<endl;
cin>>k;
cin>>x;
o=k%x;
h=(k-o)/x;
cout<<h;}
if(j=="%")
{
cout<<"podaj dwie liczby"<<endl;
cin>>k;
cin>>x;
h=k%x;
cout<<h;
}
if(j=="**")
{
cout<<"podaj dwie liczby"<<endl;
cin>>k;
cin>>x;
h=k;
for(int i=0;i<x;i++)
{
 if(h!=k)
h=h*k;
else h=h*k;
}
cout<<h;
}
if(j=="sqrt")
{
cout<<"podaj liczbe"<<endl;
cin>>a;
e=sqrt(a);
cout<<e;
}
if(j=="odwr")
{
cout<<"podaj liczbe"<<endl;
cin>>a;
cout<<"odwrotnoscia liczby a jest 1/"<<a;
}
return 69;}

