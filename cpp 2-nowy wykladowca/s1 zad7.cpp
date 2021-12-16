#include <iostream>
using namespace std;
int wystapienia(string a, char b)
{
  int n=a.size(),licznik=0;
for(int i=0;i<n;i++)
{
    if(a[i]==b)
        licznik++;
}
return licznik;
}
int main()
{
string a;
cout<<"podaj stringa"<<endl;
cin>>a;
char b;
cout<<"podaj char"<<endl;
cin>>b;
cout<<"ilosc wystapien"<<endl;
cout<< wystapienia(a,b)<<endl;
return 0;}
