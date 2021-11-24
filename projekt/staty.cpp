#include <iostream>
#include <fstream>
#include <string>
#include "staty.h"

using namespace std;

Statystyka::Statystyka(int a, int b, int c)
{
    //ekran wejsciowy
    cout<<"siemanko nigerki"<<endl;
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
// tu echodzi Serie A
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
        for(int inter=0;inter<11;inter++)
        {
            lfc>>i_z>>n_z;
            cout<<inter+1<<". "<<i_z<<"  "<<n_z<<endl;
            if(inter==0)
            {
                bramkarz=i_z;
                bramkarz=bramkarz+" ";
                bramkarz=bramkarz+n_z;
            }
            if(inter>0&&inter<5)
            {
                //cout<<ob<<endl;
                obroncy[ob]=i_z;
                obroncy[ob]=obroncy[ob]+" ";
                obroncy[ob]=obroncy[ob]+n_z;
                ob++;
            }
            //if()
        }
        inr.close();
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
void Statystyka::wczytaj_mil()
{
    fstream mil;
    string i_z,n_z;
    mil.open("milan.txt",ios::in);
    for(int mil=0;mil<11;mil++)
    {
        mil>>i_z>>n_z;
        cout<<mil+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    mil.close();
   while(zawodnik<12)
    {
    cin>>zawodnik;
    cout<<zawodnik<<endl;
    }
}
void Statystyka::wczytaj_atl()
{
    fstream atl;
    string i_z,n_z;
    atl.open("atlanta.txt",ios::in);
    for(int atl=0;atl<11;atl++)
    {
        atl>>i_z>>n_z;
        cout<<atl+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    atl.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;

}
void Statystyka::wczytaj_cfc()
{
    fstream juv;
    string i_z,n_z;
    juv.open("juventus.txt",ios::in);
    for(int juv=0;juv<11;juv++)
    {
        juv>>i_z>>n_z;
        cout<<juv+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    juv.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;

}
void Statystyka::wczytaj_nap()
{
    fstream nap;
    string i_z,n_z;
    nap.open("napoli.txt",ios::in);
    for(int nap=0;nap<11;nap++)
    {
        nap>>i_z>>n_z;
        cout<<nap+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    nap.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_laz()
{
    fstream laz;
    string i_z,n_z;
    laz.open("lazio.txt",ios::in);
    for(int laz=0;laz<11;laz++)
    {
        laz>>i_z>>n_z;
        cout<<laz+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    laz.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_rom()
{
    fstream rom;
    string i_z,n_z;
    rom.open("roma.txt",ios::in);
    for(int rom=0;rom<11;rom++)
    {
        rom>>i_z>>n_z;
        cout<<rom+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    rom.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_sas()
{
    fstream sas;
    string i_z,n_z;
    sas.open("sassuolo.txt",ios::in);
    for(int sas=0;sas<11;sas++)
    {
        sas>>i_z>>n_z;
        cout<<sas+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    sas.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_sam()
{
    fstream sam;
    string i_z,n_z;
    sam.open("sampdoria.txt",ios::in);
    for(int sampdoria=0;sampdoria<11;sampdoria++)
    {
        sampdoria>>i_z>>n_z;
        cout<<sampdoria+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    sam.close();
    cin>>zawodnik;
    cout<<zawodnik<<endl;
}
void Statystyka::wczytaj_wer()
{
    fstream wer;
    string i_z,n_z;
    wer.open("werona.txt",ios::in);
    for(int werona=0;werona<11;werona++)
    {
        wer>>i_z>>n_z;
        cout<<werona+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    wer.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_gen()
{
    fstream gen;
    string i_z,n_z;
    gen.open("genoa.txt",ios::in);
    for(int genoa=0;genoa<11;genoa++)
    {
        gen>>i_z>>n_z;
        cout<<genoa+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    gen.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_bol()
{
    fstream bol;
    string i_z,n_z;
    bol.open("bologna.txt",ios::in);
    for(int bol=0;bol<11;bol++)
    {
        bol>>i_z>>n_z;
        cout<<bol+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    bol.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_fio()
{
    fstream fio;
    string i_z,n_z;
    fio.open("fiorentina.txt",ios::in);
    for(int newcastle=0;newcastle<11;newcastle++)
    {
        fio>>i_z>>n_z;
        cout<<newcastle+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    fio.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_udi()
{
    fstream udi;
    string i_z,n_z;
    udi.open("udinese.txt",ios::in);
    for(int crystal=0;crystal<11;crystal++)
    {
        udi>>i_z>>n_z;
        cout<<crystal+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    udi.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_spe()
{
    fstream spe;
    string i_z,n_z;
    spe.open("spezia.txt",ios::in);
    for(int brighton=0;brighton<11;brighton++)
    {
        spe>>i_z>>n_z;
        cout<<brighton+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    spe.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_cag()
{
    fstream cag;
    string i_z,n_z;
    cag.open("cagliari.txt",ios::in);
    for(int whun=0;whun<11;whun++)
    {
        cag>>i_z>>n_z;
        cout<<whun+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    cag.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_tor()
{
    fstream tor;
    string i_z,n_z;
    tor.open("torino.txt",ios::in);
    for(int villa=0;villa<11;villa++)
    {
        tor>>i_z>>n_z;
        cout<<villa+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    tor.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_ben()
{
    fstream ben;
    string i_z,n_z;
    ben.open("benevento.txt",ios::in);
    for(int bournemouth=0;bournemouth<11;bournemouth++)
    {
        ben>>i_z>>n_z;
        cout<<bournemouth+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    ben.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_cro()
{
    fstream cro;
    string i_z,n_z;
    cro.open("crotone.txt",ios::in);
    for(int watford=0;watford<11;watford++)
    {
        cro>>i_z>>n_z;
        cout<<watford+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    cro.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
void Statystyka::wczytaj_par()
{
    fstream par;
    string i_z,n_z;
    par.open("parma.txt",ios::in);
    for(int norwich=0;norwich<11;norwich++)
    {
        par>>i_z>>n_z;
        cout<<norwich+1<<". "<<i_z<<"  "<<n_z<<endl;
    }
    par.close();
    cin>>zawodnik;
    cout<<zawodnik;
}
