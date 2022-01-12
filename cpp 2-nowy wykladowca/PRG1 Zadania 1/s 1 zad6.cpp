#include <iostream>
using namespace std;
bool  is_divisible(int j,int d)
{
    if(j%d==0)
        return true;
    else
        return false;
}
bool is_even(int a)
{
 if(is_divisible(a,2)==true)
 {
     cout<<"ta liczba jest parzysta"<<endl;
 }
else
    cout<<"ta liczba jest nieparzysta"<<endl;
    }
int main()
{
int jd;
cout<<"podakj liczbe"<<endl;
cin>>jd;
is_even(jd);
return 213;
//if(even(jd)==true)
 //   cout<<"jest parzysta";
}
