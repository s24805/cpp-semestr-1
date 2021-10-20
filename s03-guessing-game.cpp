#include <iostream>
#include <ctime>
using namespace std;
int main()
{
int a,b;
srand(time(NULL));
a=rand()%101;
cout<<"witam. podaj liczbe w zakresie od 0 do 100"<<endl;
cin>>b;
while(a!=b)
{if(b<a){cout<<"za malo"<<endl;
cin>>b;}
else if(b>a){cout<<"za duzo"<<endl;
cin>>b;}}
cout<<"wow ty wygrol";
return 69;}
