#include <iostream>
#include <string>
using namespace std;
int main()
{
    int d,c=0;
    string a;
    cout<<"podaj ciag znakow(mozna zaczac od -n -r -l)"<<endl;
    cin>>a;
    d=a.size();
    char T[d];
    for(int i=0;i<d;i++)
    {
        T[i]=a[i];
    }
    if(T[0]=='-' && T[1]=='n' && T[2]!='-')
    {
     for(int i=2;i<d;i++)
    {
      cout<<T[i]<<" ";
    }
    cout<<" nie ma endl;";
    }
   if(T[0]=='-' && T[1]=='l' && T[2]!='-')
    {
     for(int i=2;i<d;i++)
    {
      cout<<T[i]<<endl;
    }
    }
    if(T[0]=='-' && T[1]=='r' && T[2]!='-')
    {
     for(int i=d-1;i>1;i--)
    {
      cout<<T[i]<<" ";
    }
    }
    // podwojone komendy
    if(T[0]=='-' && T[1]=='r' && T[2]=='-' && T[3]=='l')
    {
     for(int i=d-1;i>3;i--)
    {
      cout<<T[i]<<endl;
    }
    }
      if(T[0]=='-' && T[1]=='r' && T[2]=='-' && T[3]=='n')
    {
     for(int i=d-1;i>3;i--)
    {
      cout<<T[i]<<" ";
    }
    cout<<" nie ma endl;";
    }
    return 345;
}
