#include <iostream>
using namespace std;
bool palindrom(string a)
{
    string w=a;
    int dl=a.size(),licznik=0;
    for(int i=0;i<dl/2;i++)
    {
        if(w[i]==w[dl-i-1])
            licznik++;
    }
    if(licznik==dl/2)
        return true;
    else
        return false;
}
int main()
{
string a;
cout<<"podaj wyraz"<<endl;
cin>>a;
int s;
s=palindrom(a);
if(s==1)
    cout<<"podany wyraz jest palindromem"<<endl;
else
    cout<<"podany wyraz nie jest palindromem"<<endl;
return 0;}
