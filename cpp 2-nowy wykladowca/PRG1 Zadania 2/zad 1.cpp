#include <iostream>
#include <vector>
using namespace std;
void average_of()
{
    vector <int> jd;
    int cygan=-1,suma;
    float niespokojny;
    cout<<"wpisz pare liczb, a '0' zakonczy ich wpisywanie"<<endl;
    suma=0;
    while(cygan!=0)
    {
        cin>>cygan;
        suma+=cygan;
        jd.push_back(cygan);
    }
    niespokojny=suma/(jd.size()-1);
    cout<<niespokojny;
}
int main()
{
    average_of();
    return 1234;
}
