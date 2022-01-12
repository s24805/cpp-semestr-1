#include <iostream>
#include <string>
using namespace std;
class trojkat
{
    public:
    int x,y,z;
};
string sprawdz(trojkat przyk)
{
    int pom;
    string odp;
    int a,b,c;
    a=przyk.x;
    b=przyk.y;
    c=przyk.z;
    for(int i=0;i<2;i++)
    {if(b>a)
        {
        pom=a;
        a=b;
        b=pom;
        }
    if(c>b)
        {
        pom=c;
        c=b;
        b=pom;
        }
    }
    if(b*b+(c*c)==a*a)
        odp="prostokatny";
    if(b*b+(c*c)<a*a)
        odp="roxwartokatny";
    if(b*b+(c*c)>a*a)
        odp="ostrokatny";
    return odp;
}
int main()
{
    trojkat jd;
    string h;
    cout<<"podaj 3 dlg bokot trojkata"<<endl;
    cin>>jd.x;
    cin>>jd.y;
    cin>>jd.z;
    if((jd.y+jd.z>jd.x) && (jd.y<jd.z+jd.x) && (jd.y+jd.x>jd.z))
    {
        h=sprawdz(jd);
        cout<<h;
    }
    else cout<<"podane dlugosci nie tworza trojkata";
    return 345;
}
