#include <iostream>
using namespace std;
void a(int x)
{
  int T[x];
  int jd;
  T[0]=1;
  for(int i=1;i<x;i++)
  {
      T[i]=T[i-1]+1;
  }
  cout<<"[ ";
  for(int i=0;i<x;i++)
    cout<<T[i]<<" ";
    cout<<"]"<<endl;
    for(int j=0;j<x-1;j++)
    {
        jd=T[1];
        T[0]=jd;
        cout<<"[ ";
        for(int i=1;i<x;i++)
        {
            T[i]=(1+T[i-1]);
        }
        T[0]=jd;
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";
        cout<<"]"<<endl;
    }
}
void b(int x)
{
  int T[x];
  int jd;
  T[x-1]=1;
  for(int i=0;i<x-1;i++)
  {
      T[i]=0;
  }
  cout<<"[ ";
  for(int i=0;i<x;i++)
    cout<<T[i]<<" ";
  cout<<"]"<<endl;
    for(int j=x-1;j>0;j--)
    {
        cout<<"[ ";
        for(int i=x-2;i>=0;i--)
        {
            if(T[i+1]==0)
            continue;
            if(i==x-2)
            {
                T[x-1]++;
            }
            T[i]=T[i+1]-1;
        }
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";
        cout<<"]"<<endl;
    }
}
void c(int x)
{
  int T[x];
  int jd,a=0;
  T[x-1]=2*x;
  for(int i=x-2;i>=0;i--)
  {
      T[i]=T[i+1]-2;
  }
  cout<<"[ ";
  for(int i=0;i<x;i++)
    cout<<T[i]<<" ";
  cout<<"]"<<endl;
    for(int j=0;j<x-1;j++)
    {
        cout<<"[ ";
        for(int t=0;t<=a;t++)
            T[t]+=2;
        a++;
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";
        cout<<"]"<<endl;
    }
}
void d(int x)
{
  int T[x];
  int jd;
  T[0]=x;
  for(int i=1;i<x;i++)
  {
      T[i]=T[i-1]-1;
  }
  cout<<"[ ";
  for(int i=0;i<x;i++)
    cout<<T[i]<<" ";
  cout<<"]"<<endl;
    for(int j=0;j<x-1;j++)
    {
        cout<<"[ ";
        jd=T[1];
        T[0]=jd;
        for(int i=1;i<x;i++)
        {
            if(T[i-1]==0)
            continue;
            T[i]=T[i-1]-1;
        }
        for(int i=0;i<x;i++)
           cout<<T[i]<<" ";
        cout<<"]"<<endl;
    }
}
int main()
{
        int y;
        cout<<"podaj rozmiar macierzy (pokaza sie wszystkie rodzaje aby usprawnic sparwdzanie)"<<endl;
        cin>>y;
        a(y);
        cout<<endl;
        b(y);
        cout<<endl;
        c(y);
        cout<<endl;
        d(y);
    return 123;

}
