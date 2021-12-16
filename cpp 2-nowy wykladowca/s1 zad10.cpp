#include <iostream>
using namespace std;
void box_print()
{
    cout<<"podaj 5 slow"<<endl;
    string T[5],wyraz;
    int dl=0,szer,pom,DLU[5];
    for(int i=0;i<5;i++)
    {
        cin>>wyraz;
        T[i]=wyraz;
        pom=wyraz.size();
        DLU[i]=pom;
        if(dl<pom)
            dl=pom;
    }
    szer=dl+2;
    for(int i=0;i<dl;i++)
        cout<<"*";
    cout<<endl;
    for(int j=0;j<5;j++)
    {
        cout<<"* ";
        cout<<T[j];
        for(int i=0;i<dl-DLU[j]+1;i++)
            cout<<" ";
        cout<<"*";
        cout<<endl;
    }
    for(int i=0;i<dl;i++)
        cout<<"*";
}
int main()
{
box_print();
return 213;
}


