#include <iostream>
using namespace std;
int main()
{
   int h;
   cout<<"podaj wysokosc trojkata pascala"<<endl;
   cin>>h;
   if(h<1)
   while(h<1)
   {
       cout<<"zle podana wartosc. Podaj ponownie"<<endl;
       cin>>h;
   }
   int T[h][h];
   for(int y=0;y<h;y++)
    {for(int x=0;x<h;x++)
    {
T[x][y]=0;
    }}
for(int y=0;y<h;y++)
    {for(int x=0;x<h;x++)
    {
    if(y==x)
        {
        T[x][y]=1;
        continue;
        }
    if(x==0)
        {T[x][y]=1;
        continue;}
    if(x>y)
        {T[x][y]=0;
        continue;
        }
    else
        {

            T[x][y]=T[x-1][y-1]+T[x][y-1];
        }
    }
   }
    for(int y=0;y<h;y++)
    {for(int x=0;x<h;x++)
    {
        if(T[x][y]==0)
            continue;
            if((T[x][y]>0) && (T[x][y]<10))
       cout<<T[x][y]<<"   ";
        if((T[x][y]>=10) && (T[x][y]<100))
       cout<<T[x][y]<<"  ";
       if((T[x][y]>=100) && (T[x][y]<1000))
       cout<<T[x][y]<<" ";
    }
    cout<<endl;
    }
return 6456;
}
