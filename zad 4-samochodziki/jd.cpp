#include <iostream>
#include <string>
#include "byle co.h"
using namespace std;
Samochod::Samochod(string a, string b, int x, int y)
{
    nazwa=a;
    model=b;
    rok_p=x;
    przebieg=y;
    cout<<"marka: "<<nazwa<<endl;
    cout<<"model: "<<model<<endl;
    cout<<"przebieg: "<<przebieg<<endl;
    cout<<"rok produkcji: "<<rok_p<<endl;
    cout<<endl;
}
int Samochod::cenaWyjsc()
{
    cout<<"podaj cene wyjsciowa samochodu"<<endl;
    cin>>cenaW;
    if(cenaW-(2021-rok_p)*10000-przebieg*3<0)
    {
        while(cenaW-(2021-rok_p)*10000-przebieg*3<0)
        {
            cout<<"podaj inna cene wyjsciowa samochodu bo podana jest za mala"<<endl;
            cin>>cenaW;
        }
    }
    return cenaW;
}
int Samochod::cenaKon()
{
    cenaK=cenaW-((2021-rok_p)*10000)-(przebieg*3);
    return cenaK;
}
void Samochod::oferta()
{
    cout<<"marka: "<<nazwa<<endl;
    cout<<"model: "<<model<<endl;
    cout<<"rok produkcji: "<<rok_p<<endl;
    cout<<"cena wyjsciowa: "<<cenaW<<endl;
    cout<<"cena koncowa: "<<cenaK<<endl;
    cout<<endl;
}
