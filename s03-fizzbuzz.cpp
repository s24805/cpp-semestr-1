#include <iostream>
#include <ctime>
using namespace std;
int main()
{
int b;

cout<<"witam. podaj liczbe"<<endl;
cin>>b;
for(int i=1;i<b;i++)
{
if(i%3==0 && i%5==0) cout<<i<<" FizzBuzz"<<endl;
else if(i%3==0) cout<<i<<" Fizz"<<endl;
else if(i%5==0) cout<<i<<" Buzz"<<endl;
else cout<<i<<endl;
}
return 69;}
