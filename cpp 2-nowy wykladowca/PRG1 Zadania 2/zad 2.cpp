#include <iostream>
#include <vector>
using namespace std;
bool palindrom(string a)
{
    string w=a;
    int dl=a.size(),licznik=0;
    for(int i=0;i<dl/2;i++)
    {
        if(w[i]==w[dl-i-1])
            licznik++;
    }
    if(licznik==dl/2)
        return true;
    else
        return false;
}
void filter_palindromes(vector <string> jd1)
{
    vector <string> jd2;
    for(int i=0;i<jd1.size();i++)
    {
        if(palindrom(jd1[i])==true)
            jd2.push_back(jd1[i]);
    }
    cout<<endl;
    cout<<"palindromami sa:"<<endl;
    for(int i=0;i<jd2.size();i++)
    {
        cout<<jd2[i]<<endl;
    }
}
int main()
{
    vector <string> jd1;
    string cygan;
    cout<<"wpisz pare slow, a 'koniec' zakonczy ich wpisywanie"<<endl;
    while(cygan!="koniec")
    {
        cin>>cygan;
        jd1.push_back(cygan);
    }
    filter_palindromes(jd1);
    return 1234;
}

