#include <iostream>
using namespace std;
struct wsk
{
    int a;
    int *tthis;
    void druk()
    {
    tthis=&a;
    cout<<tthis;}
};
int main()
{
    wsk w1;
    cout<<"podaj liczbe a pokaze ci miejsce jej zapisu"<<endl;
    cin>>w1.a;
    w1.druk();

}
