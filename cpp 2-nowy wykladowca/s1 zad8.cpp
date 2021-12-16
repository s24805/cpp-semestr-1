#include <iostream>
using namespace std;
void wypisz(string a, int b)
{
    string w=a;
    int r=b,dl=a.size();
    for(int i=b;i<=dl;i+=b)
    {
        cout<<w[i-1]<<" ";
    }
}

int main()
{
string a;
cout<<"podaj stringa"<<endl;
cin>>a;
int b;
cout<<"podaj liczbe"<<endl;
cin>>b;
wypisz(a,b);
return 0;}
