#include <iostream>
#include <vector>
using namespace std;
int hej(vector <int> jd1,vector <int> jd2)
{
    int koks=0;
    if(jd1.size()!=jd2.size())
    {
        cout<<"zle rozmiary wektorow"<<endl;
        return 122;
    }
    else
    for(int i=0;i<jd1.size();i++)
    {
       koks+=jd1[i]*jd2[i];
    }
    cout<<"iloczyn skalarny vectorow to: "<<koks;

}
int main()
{
     vector <int> jd1,jd2;
    int koks=1;
    cout<<"podaj kilka liczb, a '0' zakonczy prace"<<endl;
    while(koks!=0)
    {
        cin>>koks;
        jd1.push_back(koks);
    }
    cout<<"podaj ponownie kilka liczb, a '0' zakonczy prace"<<endl;
    koks=1;
    while(koks!=0)
    {
        cin>>koks;
        jd2.push_back(koks);
    }
    hej(jd1,jd2);
    return 1234;
}


