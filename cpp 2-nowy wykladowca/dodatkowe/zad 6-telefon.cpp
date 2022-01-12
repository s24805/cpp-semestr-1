#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct kontakt
    {
        int nr;
        string nazwa;
        int licz;
    };
int main()
{
    string pol,naz;
    int num,roz=0;
kontakt tab[20];
for(int sad=0;sad<1;sad--)
{
    cout<<endl;
    cout<<"co chcesz zrobic?"<<endl;
    cout<<"1-dodaj nr"<<endl;
    cout<<"2-szukaj nru"<<endl;
    cout<<"3-wypisz cala ksiazke"<<endl;
    cout<<"4-usun kontakt"<<endl;
    cout<<"5-zadzwon"<<endl;
    cout<<"6-wyjdz z telefonu"<<endl;
    cin>>pol;
    if(pol=="1")
    {
        cout<<"podaj nr"<<endl;
        cin>>num;
        tab[roz].nr=num;
        cout<<"podaj nazwisko"<<endl;
        cin>>naz;
        tab[roz].nazwa=naz;
        tab[roz].licz=0;
        roz++;
    }
    else if(pol=="2")
{
    cout<<"poidaj numer do wyszukania"<<endl;
    cin>>num;
    for(int j=0;j<roz;j++)
    {
        if(tab[j].nr==num)
        {
            cout<<"nr: "<<tab[j].nr<<"  ";
            cout<<"nazwa: "<<tab[j].nazwa<<"  ";
            cout<<"polonczenia: "<<tab[j].licz<<endl;
        }
    }
}
    else if(pol=="3")
    {
        for(int i=0;i<roz;i++)
        {
            if(tab[i].nr==-1)
                continue;
            cout<<"nr: "<<tab[i].nr<<"  ";
            cout<<"nazwa: "<<tab[i].nazwa<<"  ";
            cout<<"polonczenia: "<<tab[i].licz<<endl;
        }
    }
    else if(pol=="4")
    {
        cout<<"poidaj numer do usuniecia"<<endl;
        cin>>num;
        for(int i=0;i<roz;i++)
        {
        if(tab[i].nr==num)
        {
            tab[i].nr=-1;
            tab[i].nazwa="";
            tab[i].licz=-1;
        }
    }}
    else if(pol=="5")
    {
        cout<<"poidaj numer do zadzwonienia"<<endl;
        cin>>num;
         for(int i=0;i<roz;i++)
        {
        if(tab[i].nr==num)
        {
            tab[i].licz++;
        }
    }}
    else if(pol=="6")
    {
        return 435;
    }
}
    return 123414;
}
