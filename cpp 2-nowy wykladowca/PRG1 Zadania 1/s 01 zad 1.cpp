#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main()
{
    int zak,ok;
    stringstream ss;
    string wynik;
  cout<<"podaj zakres liczb"<<endl;
  cin>>zak;
  for(int i=2;i<zak;i++)
  {
      for(int j=2;j<i;j++)
      {
          if(i%j==0)
          {
              ok=0;
             break;
          }
          else
            ok=1;
      }
      if(ok==1)
        ss<<i<<" ";
  }
  wynik=ss.str();
  cout<<wynik;
return 213;
}
