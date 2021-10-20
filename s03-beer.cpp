#include <iostream>
#include <string>
using namespace std;
int main()
{
int n;
cout<<"wpisz liczbe"<<endl;
cin>>n;
for(int i=1;i<n;i++)
{

cout<<n-i+1<<" bottles of beer on the wall,"<<n-i+1<<" bottles of beer."<<endl;
cout<<"Take one down, pass it around, "<<n-i<<" bottles of beer on the wall...";
}
cout<<"No more bottles of beer on the wall, no more bottles of beer."<<endl;
cout<<"Go to the store and buy some more,"<<n<<" bottles of beer on the wall...";
return 69;}
