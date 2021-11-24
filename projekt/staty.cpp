#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

Statystyka::Statystyka(int a, int b, int c)
{
    //ekran wejsciowy
    cout<<"siemanko"<<endl;
}
void Statystyka::czysc_ekran()
{
    system("cls");
}
int Statystyka::wczytaj_lige()
{
    fstream ligi;
    string menu1,menu2;
    ligi.open("ligi.txt",ios::in);
    for(int i=0;i<1;i++)
    {
        ligi>>menu1>>menu2;
        cout<<menu1<<" "<<menu2<<endl;
    }
    cin>>liga;
    cout<<liga<<endl;
    /*if(liga <= 0 && liga > 4)
    {
        while(liga <= 0 && liga > 4)
        {
            cout<<"podaj poprawna wartosc"<<endl;
            cin>>liga;
        }
    }*/
    ligi.close();
    return liga;
}

int Statystyka::wczytaj_pl()
{
    fstream premier;
    string d1,d2;
    premier.open("PL.txt",ios::in);
    for(int pl=0; pl<20; ++pl)
    {
        //cout<<pl<<endl;
        premier>>d1>>d2;
        cout<<d1<<" "<<d2<<endl;
    }
    premier.close();
    cin>>druzyna;
    cout<<druzyna<<endl;
    return druzyna;
}
void Statystyka::wczytaj_lfc()
{
    fstream lfc;
    int ob=0;
    string i_z,n_z;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    //while(zawodnik<12)
    //{
        lfc.open("liverpool.txt",ios::in);
        for(int liverpool=0;liverpool<11;liverpool++)
        {
            lfc>>i_z>>n_z;
            cout<<liverpool+1<<". "<<i_z<<"  "<<n_z<<endl;
            if(liverpool==0)
            {
                bramkarz=i_z;
                bramkarz=bramkarz+" ";
                bramkarz=bramkarz+n_z;
            }
            if(liverpool>0&&liverpool<5)
            {
                //cout<<ob<<endl;
                obroncy[ob]=i_z;
                obroncy[ob]=obroncy[ob]+" ";
                obroncy[ob]=obroncy[ob]+n_z;
                ob++;
            }
            //if()
        }
        lfc.close();
        cin>>zawodnik;
        cout<<zawodnik<<endl;
        if (zawodnik==1) //bramkarz
        {
        cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
        }
        if (zawodnik>1&&zawodnik<6) //obroncy
        {
            ob=zawodnik-2;
            cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
        }
        //else if (zawodnik>5&&zawodnik<10) //pomocnicy
        //else if (zawodnik==10||zawodnik==11) //napastnicy
    //}
}
void Statystyka::wczytaj_mnc()
{
    fstream mnc;
    string i_z,n_z;
    mnc.open("city.txt",ios::in);
    for(int man_c=0;man_c<11;man_c++)
    {
        mnc>>i_z>>n_z;
        cout<<man_c+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    mnc.close();
   while(zawodnik<12)
    {
    cin>>zawodnik;
    cout<<zawodnik<<endl;
    }
}
void Statystyka::wczytaj_mnu()
{
    fstream mnu;
    string i_z,n_z;
    mnu.open("united.txt",ios::in);
    for(int man_u=0;man_u<11;man_u++)
    {
        mnu>>i_z>>n_z;
        cout<<man_u+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    mnu.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;

}
void Statystyka::wczytaj_cfc()
{
    fstream cfc;
    string i_z,n_z;
    cfc.open("chelsea.txt",ios::in);
    for(int chelsea=0;chelsea<11;chelsea++)
    {
        cfc>>i_z>>n_z;
        cout<<chelsea+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    cfc.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;

}
void Statystyka::wczytaj_lei()
{
    fstream lei;
    string i_z,n_z;
    lei.open("leicester.txt",ios::in);
    for(int leicester=0;leicester<11;leicester++)
    {
        lei>>i_z>>n_z;
        cout<<leicester+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    lei.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_tot()
{
    fstream tot;
    string i_z,n_z;
    tot.open("tottenham.txt",ios::in);
    for(int tottenham=0;tottenham<11;tottenham++)
    {
        tot>>i_z>>n_z;
        cout<<tottenham+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    tot.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_wov()
{
    fstream wov;
    string i_z,n_z;
    wov.open("wolverhampton.txt",ios::in);
    for(int wolverhampton=0;wolverhampton<11;wolverhampton++)
    {
        wov>>i_z>>n_z;
        cout<<wolverhampton+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    wov.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_ars()
{
    fstream ars;
    string i_z,n_z;
    ars.open("arsenal.txt",ios::in);
    for(int arsenal=0;arsenal<11;arsenal++)
    {
        ars>>i_z>>n_z;
        cout<<arsenal+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    ars.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_shu()
{
    fstream shu;
    string i_z,n_z;
    shu.open("sheffield.txt",ios::in);
    for(int sheffield=0;sheffield<11;sheffield++)
    {
        shu>>i_z>>n_z;
        cout<<sheffield+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    shu.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_bur()
{
    fstream bur;
    string i_z,n_z;
    bur.open("burnley.txt",ios::in);
    for(int burnley=0;burnley<11;burnley++)
    {
        bur>>i_z>>n_z;
        cout<<burnley+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    bur.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_sth()
{
    fstream sth;
    string i_z,n_z;
    sth.open("southampton.txt",ios::in);
    for(int southampton=0;southampton<11;southampton++)
    {
        sth>>i_z>>n_z;
        cout<<southampton+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    sth.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_eve()
{
    fstream eve;
    string i_z,n_z;
    eve.open("everton.txt",ios::in);
    for(int everton=0;everton<11;everton++)
    {
        eve>>i_z>>n_z;
        cout<<everton+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    eve.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_ncl()
{
    fstream ncl;
    string i_z,n_z;
    ncl.open("newcastle.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        ncl>>i_z>>n_z;
        cout<<newcastle+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    ncl.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_cpl()
{
    fstream cpl;
    string i_z,n_z;
    cpl.open("crystal.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        cpl>>i_z>>n_z;
        cout<<crystal+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    cpl.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_bri()
{
    fstream bri;
    string i_z,n_z;
    bri.open("brighton.txt",ios::in);
    for(int brighton=0;brighton<11;brighton++)
    {
        bri>>i_z>>n_z;
        cout<<brighton+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    bri.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_whu()
{
    fstream whu;
    string i_z,n_z;
    whu.open("whu.txt",ios::in);
    for(int whun=0;whun<11;whun++)
    {
        whu>>i_z>>n_z;
        cout<<whun+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    whu.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_asv()
{
    fstream asv;
    string i_z,n_z;
    asv.open("villa.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        asv>>i_z>>n_z;
        cout<<villa+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    asv.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_bou()
{
    fstream bou;
    string i_z,n_z;
    bou.open("bournemouth.txt",ios::in);
    for(int bournemouth=0;bournemouth<11;bournemouth++)
    {
        bou>>i_z>>n_z;
        cout<<bournemouth+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    bou.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_wat()
{
    fstream wat;
    string i_z,n_z;
    wat.open("watford.txt",ios::in);
    for(int watford=0;watford<11;watford++)
    {
        wat>>i_z>>n_z;
        cout<<watford+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    wat.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_nor()
{
    fstream nor;
    string i_z,n_z;
    nor.open("norwich.txt",ios::in);
    for(int norwich=0;norwich<11;norwich++)
    {
        nor>>i_z>>n_z;
        cout<<norwich+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    nor.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
