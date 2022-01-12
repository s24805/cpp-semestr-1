#include <iostream>
#include <cstring>
#include <string>
#include <vector>
using namespace std;
int main()
{
    string para;
    char a,b,d;
    vector <string> wynik;
    int numer1,numer2;
    int pom;
    while(para!="stop")
    {
        cout<<"podaj pare znakow"<<endl;
        cin>>para;
        if(para=="stop")
            break;
        a=para[0];
        numer1=(int)a;
        cin>>para;
        b=para[0];
        numer2=(int)b;
        para.clear();
        if(numer1>numer2)
        {
            pom=numer1;
            numer1=numer2;
            numer2=pom;
        }
        para.clear();
        for(int i=numer1;i<=numer2;i++)
        {
            d=(char)i;
            para=para+d;
        }


        cout<<para<<endl;
        wynik.push_back(para);
        para.clear();
    }
    return 0;
}
