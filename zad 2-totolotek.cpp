#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int main()
{
    int argv[6],argc,los[6],i1, i2, pom,wynik=0;
    srand(time(NULL));
    cout<<"podaj zakres losowanych liczb(minimum 6)"<<endl;
    cin>>argc;
    if(argc<6)
    {
        cout<<"blad";
        return 5435;
    }
    for(int i=0;i<argc;i++)
        los[i]=i+1;
    for(int i=15*argc;i>0;i--)
    {
        i1=rand()%argc;
        i2=rand()%argc;
        pom=los[i1];
        los[i1]=los[i2];
        los[i2]=pom;
    }
    cout<<"podaj 6 swoich typow. Zakres od 1 do "<<argc<<endl;
    for(int i=0;i<6;i++)
    cin>>argv[i];
    cout<<"Wylosowane liczby to:"<<endl;
    for(int i=0;i<6;i++)
    cout<<los[i]<< " ";
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            if(los[j]==argv[i])
                wynik++;
        }
    }
    cout<<"zgadles "<<wynik<<" na 6";
    //(los[j]==los[1] || los[j]==los[0] || los[j]==los[5] || los[j]==los[4] || los[j]==los[3] || los[j]==los[2])
return 3453;
}
