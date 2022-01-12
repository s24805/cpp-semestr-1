#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student
{
    public:
    string imie,nazwisko;
    vector <float> oceny;
};

class Grupa
{
    public:
    string nazwa;
    vector <Student> studenci;
};

float srednia( vector <float> a )
{
    int d=a.size();
    float s=0;
    if(d==0)
    {
        cout<<"brak vectora"<<endl;
    }
    else
    {
        for(int i=0;i<d;i++)
            s=s+a[i];

        s=s/d;
    }
    return s;
}

float m_sredniej(vector <float> a)
{
    int d=a.size();
    int z=d/2;
    float du;
    if(d%2==1)
    {
        d=a[z];
        return du;
    }
    else
    {
        d=a[z];
        d=d+a[z+1];
        return du;
    }
}
string najlepsza_grupa(vector <Grupa> grupy)
{
    int d=grupy.size();
    float T[d]={0};
    float sr,w,ma=0;
    int d1,t;
    vector <float> sred;
    vector <Student> a;
    vector <float> oce;
    for(int i=0;i<d;i++)
    {
        a=grupy[i].studenci;
        cout<<grupy[i].nazwa<<endl;
        d1=a.size();
        for(int i1=0;i1<d1;i1++)
        {
            cout<<a[i1].nazwisko<<endl;
            oce=a[i1].oceny;
            sr=srednia(oce);
            cout<<sr<<endl;
            sred.push_back(sr);
        }
        w=m_sredniej(sred);
        T[i]=w;
    }
    for(int j=0;j<d;j++)
    {
        if(T[j]>ma)
        {
            t=j;
            ma=T[j];
        }
    }
    return grupy[t].nazwa;
}

int main()
{
    Grupa grupen;
    grupen.nazwa="Grupa 1";
    float ocena_kolesia;
    Student chlop;
    chlop.imie="Adam";
    chlop.nazwisko="Nawalka";
    ocena_kolesia=1;
    chlop.oceny.push_back(ocena_kolesia);
    ocena_kolesia=4;
    chlop.oceny.push_back(ocena_kolesia);
    ocena_kolesia=3;
    chlop.oceny.push_back(ocena_kolesia);

    Student chlop1;
    chlop1.imie="Adam";
    chlop1.nazwisko="Malysz";
    ocena_kolesia=1;
    chlop1.oceny.push_back(ocena_kolesia);
    ocena_kolesia=4;
    chlop1.oceny.push_back(ocena_kolesia);
    grupen.studenci={chlop,chlop1};

    Grupa grupen1;
    grupen1.nazwa="Grupa 2";

    Student gagatek1;
    gagatek1.imie="Robert";
    gagatek1.nazwisko="Lewandowski";
    ocena_kolesia=3;
    gagatek1.oceny.push_back(ocena_kolesia);
    ocena_kolesia=1;
    gagatek1.oceny.push_back(ocena_kolesia);
    ocena_kolesia=2;
    gagatek1.oceny.push_back(ocena_kolesia);
    ocena_kolesia=5;
    gagatek1.oceny.push_back(ocena_kolesia);

    Student gagatek2;
    gagatek2.imie="Robert";
    gagatek2.nazwisko="Kubica";
    ocena_kolesia=5;
    gagatek2.oceny.push_back(ocena_kolesia);
    ocena_kolesia=3;
    gagatek2.oceny.push_back(ocena_kolesia);

    Student gagatek3;
    gagatek3.imie="Andrzej";
    gagatek3.nazwisko="Golota";
    ocena_kolesia=3;
    gagatek3.oceny.push_back(ocena_kolesia);
    ocena_kolesia=2;
    gagatek3.oceny.push_back(ocena_kolesia);
    grupen1.studenci.push_back(gagatek1);
    grupen1.studenci.push_back(gagatek2);
    grupen1.studenci.push_back(gagatek3);
    vector <Grupa> grupy;
    grupy.push_back(grupen);
    grupy.push_back(grupen1);
    cout<<najlepsza_grupa(grupy);
    return 0;
}
