#include <iostream>
#include <vector>
#include <string>
#include <sstream>
using namespace std;
struct Pacjent
{
    public:
    string login;
    string haslo;
    string nazwisko;
    vector <string> data;
};
vector <Pacjent> Rej ( vector <Pacjent> dane1 )
{
    string y;
    Pacjent jd;
    cout<<"Podaj:"<<endl;
    cout<<"-login"<<endl;
    cin>>y;
    jd.login=y;
    cout<<"-nazwisko"<<endl;
    cin>>y;
    jd.nazwisko=y;
    cout<<"-haslo"<<endl;
    cin>>y;
    jd.haslo=y;
    cout<<"-data (dd.mm.rr)"<<endl;
    cin>>y;
    jd.data.push_back(y);
    dane1.push_back(jd);
    y="ss";
    return dane1;}

    int zaloguj ( vector <Pacjent> dane1 )
{
    string log,has;
    int ok=0,pom;
    Pacjent jd;
    cout<<"Podaj:"<<endl;
    cout<<"-login"<<endl;
    cin>>log;
    for(int i=0;i<dane1.size();i++)
    {
        if(dane1[i].login==log)
        {
            cout<<"podaj haslo"<<endl;
            cin>>log;
            if(log==dane1[i].haslo)
                pom=i;
        }
        else
            ok++;
    }
    if(ok==dane1.size()-1)
        pom=-1;
    return pom;
}

int* zamiana_str_do_int(string a)
{
    int jd,T[6],T2[3],licznik=0;
if(a.size()>8)
    T[0]=-1;
for(int i=0;i<8;i++)
{
    if(a[i]=='.')
        continue;
    else if(47<(int)a[i] && 58>(int)a[i])
    {
        T[licznik]=(int)a[i]-48;
        licznik++;
    }
    else
        T[0]=-1;
}
for(int i=0;i<3;i++)
{
    T2[i]=T[2*i]*10+T[2*i+1];
}
    return T2;
}
string zamiana_int_na_str(int T[3])
{
    int a,b,jd,licznik=0;
    string wynik,pom;
for(int i=0;i<3;i++)
{
    a=T[i]%10+48;
    b=(T[i]-a*10)+48;
    jd=(char)a;
    wynik+=jd;
    jd=(char)b;
    wynik+=jd;
    if(i<2)
    wynik+='.';
}
return wynik;
}
int* czas_powieksz_mies(int T[3],int oile)
{
    //powieksza o podana ilosc miesiecy
    int T2[3];
    T2[0]=T[0];
    T2[1]=T[1];
    T2[2]=T[2];
    if(T[1]+oile>12)
    {
        T2[1]=T[1]+oile-12;
        T2[2]++;
    }
    else
        T2[1]+=oile;
    return T2;
}
int* czas_powieksz_rok(int T[3],int oile)
{
    //powieksza o podana ilosc lat
    int T2[3];
    T2[0]=T[0];
    T2[1]=T[1];
    T2[2]=T[2];
    if(T[2]+oile>99)
    {
        T2[2]=T[2]+oile-99;
    }
    else
        T2[2]+=oile;
    return T2;
}
string porownanie(int T[3],int T2[3])
{
    int T3[3];
    string wynik;
//T-data szczepienia t2-1 data mozliwego nast szczep,t3-wynik
for(int i=0;i<3;i++)
    T3[i]=T2[i]-T[i];
if(T3[2]<0)
    wynik="true";
else if(T3[1]<0)
{
    T[2]--;
    T[1]+=12;
}
else if(T3[0]<0)
{
    T[1]--;
    T[0]+=31;
}
if(T3[0]>0 && T3[1]>0 && T3[2]>0 )
    wynik="true";
else
    wynik="false";
return wynik;
}
    void wypisz ( vector <Pacjent> dane1, int i )
{
    cout<<"daty szczepien:"<<endl;
    for(int x=0;x<dane1[i].data.size();x++)
            {
                   cout<<dane1[i].data[x]<<endl;
            }
}
void czyMoge(string a)
{
    if(a=="true")
    cout<<"mozna sie zaszczepic"<<endl;
    else cout<<"nie mozna sie zaszczepic"<<endl;
}
int main()
{
    vector <Pacjent> dane;
    int index,a,T[3],T2[3],r;
    int *arr, *arr2;
    string tera,odp="brak",pom;
    Pacjent test;
    test.data.push_back("12.02.19");
    test.nazwisko="Kubica";
    test.haslo="Robertkrul";
    test.login="88Kubica";
    dane.push_back(test);
    for(int i=0;i<1;i--)
    {
        cout<<"kazdy miesiac ma 31 dni"<<endl;
        cout<<"1 - rejestruj"<<endl;
        cout<<"2 - zaloguj"<<endl;
        cout<<"3 - wyjdz"<<endl;
        cin>>a;
        if(a==1)
            dane=Rej(dane);
        if(a==2)
        {
            index=zaloguj(dane);
            if(index==-1)
                break;
            for(int x=0;x<1;x--)
            {
                cout<<"1 - wyloguj"<<endl;
                cout<<"2 - wypisz "<<endl;
                cout<<"3 - czy moze sie zaszczepic"<<endl;
                cout<<"4 - czy wazny certyfikat"<<endl;
                cin>>a;
                if(a==1)
                    break;
                else if(a==2)
                {
                    wypisz(dane,index);
                }
                else if(a==3)
                {
                    cout<<"Podaj dzisiejsza date (dd.mm.rr)"<<endl;
                    cin>>tera;
                    arr=zamiana_str_do_int(tera);
                    if(dane[index].data.empty()==true)
                            cout<<"Mozna sie zaszczepic"<<endl;
                    else if(dane[index].data.size()==1)
                   {
                            r=1;
                            arr=czas_powieksz_mies(T,r);
                            arr2=zamiana_str_do_int(dane[index].data[data.size()-1]);
                            odp=porownanie(T,T2);
                            czyMoge(odp);
                   }
                    else
                    {
                            r=6;
                            arr=czas_powieksz_mies(T,r);
                            arr2=zamiana_str_do_int(dane[index].data[data.size()-1]);
                            odp=porownanie(T,T2);
                            czyMoge(odp);
                    }
                    if(odp=="true")
                    {
                            cout<<"Zaszczepic?"<<endl;
                            arr=czas_powieksz_mies(T,r);
                            dane[index].data.push_back(arr);
                    }

                }
                else if(a==4)
                {
                    if(dane[index].data.size()>1)
                    {
                        cout<<"podaj dzisiejsza date"<<endl;
                        cin>>tera;
                        arr=zamiana_str_do_int(tera);
                        pom=dane[index].data[size()-1];
                        arr2=zamiana_str_do_int(pom);
                        r=1;
                        czas_powieksz_rok(arr2); //powiekjszam date szczepienia o rok
                        pom=porownanie(arr2,arr)//jesli data szczep +12 jest>niz teraz data, to jest true, czyli certyfikat jest
                        if(pom=="true")
                            cout<<"certyfikat jest wazny"<<endl;
                        else cout<<"certyfikat jest nie wazny"<<endl;
                    }
                    else cout<<"certyfikat jest nie wazny"<<endl;
                }

            }
        }
    if(a==3)
        return 0;
    else
        cout<<"zle wpisana liczba"<<endl;
    }
    return 1234;
}
