#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

int Statystyka::wczytaj_sa()
{
    fstream serie;
    string d1,d2;
    serie.open("SerieA.txt",ios::in);
    for(int pl=0; pl<20; ++pl)
    {
        //cout<<pl<<endl;
        serie>>d1>>d2;
        cout<<d1<<" "<<d2<<endl;
    }
    serie.close();
    cin>>druzyna;
    cout<<druzyna<<endl;
    return druzyna;
}
void Statystyka::wczytaj_inr()
{
    fstream inr;
    int ob=0;
    string i_z,n_z;
    string bramkarz;
    string obroncy[4];
    string pomocnicy[4];
    string napastnicy[2];
    //while(zawodnik<12)
    //{
        inr.open("inter.txt",ios::in);
    for(int jd=0;jd<11;jd++)
    {
        inr>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    inr.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_mil()
{
    fstream mil;
    string i_z,n_z;
    mil.open("milan.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        mil>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    mil.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_atl()
{
    fstream atl;
    string i_z,n_z;
    atl.open("atlanta.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        atl>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    atl.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_juv()
{
    fstream juv;
    string i_z,n_z;
    juv.open("juventus.txt",ios::in);
       for(int jd=0;jd<11;jd++)
    {
        juv>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    juv.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_nap()
{
    fstream nap;
    string i_z,n_z;
    nap.open("napoli.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        nap>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    nap.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_laz()
{
    fstream laz;
    string i_z,n_z;
    laz.open("lazio.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        laz>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    laz.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_rom()
{
    fstream rom;
    string i_z,n_z;
    rom.open("roma.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        rom>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    rom.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_sas()
{
    fstream sas;
    string i_z,n_z;
    sas.open("sassuolo.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        sas>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    sas.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_sam()
{
    fstream sam;
    string i_z,n_z;
    sam.open("sampdoria.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        sam>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    sam.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_wer()
{
    fstream wer;
    string i_z,n_z;
    wer.open("werona.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        wer>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    wer.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_gen()
{
    fstream gen;
    string i_z,n_z;
    gen.open("genoa.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        gen>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    gen.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_bol()
{
    fstream bol;
    string i_z,n_z;
    bol.open("bologna.txt",ios::in);
       for(int jd=0;jd<11;jd++)
    {
        bol>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    bol.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_fio()
{
    fstream fio;
    string i_z,n_z;
    fio.open("fiorentina.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        fio>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    fio.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_udi()
{
    fstream udi;
    string i_z,n_z;
    udi.open("udinese.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        udi>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    udi.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_spe()
{
    fstream spe;
    string i_z,n_z;
    spe.open("spezia.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        spe>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    spe.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_cag()
{
    fstream cag;
    string i_z,n_z;
    cag.open("cagliari.txt",ios::in);
       for(int jd=0;jd<11;jd++)
    {
        cag>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    cag.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_tor()
{
    fstream tor;
    string i_z,n_z;
    tor.open("torino.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        tor>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    tor.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_ben()
{
    fstream ben;
    string i_z,n_z;
    ben.open("benevento.txt",ios::in);
       for(int jd=0;jd<11;jd++)
    {
        ben>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    ben.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_cro()
{
    fstream cro;
    string i_z,n_z;
    cro.open("crotone.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        cro>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    cro.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
void Statystyka::wczytaj_par()
{
    fstream par;
    string i_z,n_z;
    par.open("parma.txt",ios::in);
        for(int jd=0;jd<11;jd++)
    {
        par>>i_z>>n_z;
        cout<<jd+1<<". "<<i_z<<"  "<<n_z<<endl;
        if( jd == 0 )
        {
            bramkarz=i_z;
            bramkarz=bramkarz+" ";
            bramkarz=bramkarz+n_z;
        }
        else if( jd > 0 && jd < 5 )
        {
            obroncy[ob]=i_z;
            obroncy[ob]=obroncy[ob]+" ";
            obroncy[ob]=obroncy[ob]+n_z;
            ob++;
        }
        else if( jd > 4 && jd < 9 )
        {
            pomocnicy[po]=i_z;
            pomocnicy[po]=pomocnicy[po]+" ";
            pomocnicy[po]=pomocnicy[po]+n_z;
            po++;
        }
        else if( jd == 9 || jd == 10 )
        {
            napastnicy[na]=i_z;
            napastnicy[na]=napastnicy[na]+" ";
            napastnicy[na]=napastnicy[na]+n_z;
            na++;
        }
    }
    par.close();
    while(zawodnik<12)
        {
            cin>>zawodnik;
            cout<<zawodnik<<endl;
            if (zawodnik==1) //bramkarz
            {
                cout<<"wybrany zawodnik to: "<<bramkarz<<endl;
                cout<<"Pozycja: Bramkarz"<<endl;
            }
            else if (zawodnik>1&&zawodnik<6) //obroncy
            {
                ob=zawodnik-2;
                cout<<"wybrany zawodnik to: "<<obroncy[ob]<<endl;
                cout<<"Pozycja: Obronca"<<endl;
            }
            else if (zawodnik>5&&zawodnik<10) //pomocnicy
            {
                po=zawodnik-6;
                cout<<"wybrany zawodnik to: "<<pomocnicy[po]<<endl;
                cout<<"Pozycja: Pomocnik"<<endl;
            }
            else if (zawodnik==10||zawodnik==11) //napastnicy
            {
                na=zawodnik-10;
                cout<<"wybrany zawodnik to: "<<napastnicy[na]<<endl;
                cout<<"Pozycja: Napastnik"<<endl;
            }
        }
    zawodnik=0;
}
