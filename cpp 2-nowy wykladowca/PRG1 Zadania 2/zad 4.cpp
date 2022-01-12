#include <iostream>
#include <vector>
using namespace std;
void average_of(vector <float> jd)
{
    float niespokojny, suma=0;
    for(int i=0;i<jd.size();i++)
    {
        suma+=jd[i];
    }
    niespokojny=suma/(jd.size()-1);
    cout<<niespokojny;
}
struct uczen
{
    string imie;
    string nazwisko;
    vector <float> oceny;
};
int main()
{
    uczen u1;
    float ocena=7;
    cout<<"podaj imie, nazwisko, a nastepnie oceny ucznia"<<endl;
    cin>>u1.imie;
    cin>>u1.nazwisko;
    cout<<"(po wpisaniu 0 zakonczysz wpisywanie)"<<endl;
    while(ocena!=0)
    {
        cin>>ocena;
        u1.oceny.push_back(ocena);
    }
    cout<<"srednia ocen to: "<<endl;
    average_of(u1.oceny);
    return 1234;
}

