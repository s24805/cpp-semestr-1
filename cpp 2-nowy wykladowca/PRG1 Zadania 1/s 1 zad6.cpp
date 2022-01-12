#include <iostream>
using namespace std;
bool  is_divisible(int j,int d)
{
    if(j%d==0)
        return true;
    else
        return false;
}
void is_even(int a,int b)
{
    if(is_divisible(a,b)==true)
    {
    if(a/b%2==0)
        {
            cout<<a<<" : "<<b<<" = "<<a/b<<endl;;
            cout<<"jest parzysta";
        }
    else
        {
        cout<<a<<" : "<<b<<" = "<<a/b<<endl;
        cout<<"jest nieparzysta";
        }
    }
    else cout<<"podane liczby sa niepodzielne";
}
int main()
{
int jd,dziel;
cout<<"podakj liczbe"<<endl;
cin>>jd;
cout<<"podaj liczbe, przez ktora bedzie dzielnoa"<<endl;
cin>>dziel;
is_even(jd,dziel);
return 213;
//if(even(jd)==true)
 //   cout<<"jest parzysta";
}


