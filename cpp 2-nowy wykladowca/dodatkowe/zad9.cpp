#include <iostream>
using namespace std;
int main()
{
    int a,powt=0;
    int T[9]={500,200,100,50,20,10,5,2,1};
    int jd[9]={0};
    cout<<"podaj sume pieniedzy"<<endl;
    cin>>a;
    for(int i=0;i<9;i++)
    {
        while(a>0)
        {
            a=a-T[i];
            powt++;
        }
        a=a+T[i];
        jd[i]=powt-1;
        powt=0;
    }
    for(int i=0;i<9;i++)
    {
        if(jd[i]==0)
            continue;
        else
            cout<<T[i]<<" - "<<jd[i]<<endl;
    }
    return 2345;
}
