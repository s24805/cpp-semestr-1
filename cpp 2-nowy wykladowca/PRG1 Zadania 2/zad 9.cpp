#include <iostream>
#include <vector>
using namespace std;
int maks(vector <int> a)
{
    int x=0;
    int d=a.size();
    for(int i=0;i<d;i++)
    {
        if(a[i]>0)
            x=a[i];
    }
    return x;
}
bool zawiera(vector <int> a, vector <int> b)
{
    int dl1=a.size();
    int dl2=b.size();
    if(dl2>dl1)
        return false;
    else
    {
        int m1,m2;
        m1=maks(a);
        m2=maks(b);
        if(m2>m1)
            return false;
        else
        {
            int licz=0;
            int T1[m1]={0};
            int T2[m2]={0};
            for(int i=0;i<m1;i++)
            {
                for(int a1=0;a1<dl1;a1++)
                {
                    if(a[a1]==i)
                    T1[i]++;
                }
                for(int a2=0;a2<dl2;a2++)
                {
                    if(b[a2]==i)
                    T2[i]++;
                }
            }
            for(int a=0;a<m1;a++)
            {
                if(T1[a]>=T2[a])
                licz++;
            }
            if(licz==m2)
                return true;
            else
                return false;
        }
    }
}
int main()
{
    vector <int> a;
    int pod=1;
    cout<<"podaj liczbe do 1 vectora (0 konczy pobieranie)"<<endl;
    while(pod!=0)
    {
        cin>>pod;
        a.push_back(pod);
    }
    a.pop_back();
    vector <int> b;
    pod=1;
        cout<<"podaj liczbe do 2 vectora (0 konczy pobieranie)"<<endl;
    while(pod!=0)
    {
        cin>>pod;
        b.push_back(pod);
    }
    b.pop_back();
    if(zawiera(a,b)==1)
        cout<<"drugi vector jest podzbiorem pierwszego"<<endl;
    else
        cout<<"drugi vector nie jest podzbiorem pierwszego"<<endl;
    return 0;
}
