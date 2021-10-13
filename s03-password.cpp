#include <iostream>
#include <string>
using namespace std;
int main()
{
string haslo,a;
cout<<"podaj nowe haslo"<<endl;
cin>>haslo;
cout<<"podaj haslo"<<endl;;
cin>>a;
while(a!=haslo)
{cout<<"podaj haslo"<<endl;
cin>>a;
if(a==haslo){cout<<"haslo poprawne!";break;}
}
return 69;}
