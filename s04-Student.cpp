#include <iostream>
using namespace std;
int main()
{
    struct student
    {
        string imie, naz,nr;
        int sem;
        float sr;
    };
    struct student s1;
    s1.imie ="Robert";
    s1.naz ="Kubica";
    s1.nr ="s12341";
    s1.sem =1;
    s1.sr=5.3;
    struct student s2;
    s2.imie ="Zbigniew";
    s2.naz ="stonoga";
    s2.nr ="s132425";
    s2.sem =1;
    s2.sr=3.5;
cout<<s1.imie<<" "<<s1.naz<<" "<<s1.nr<<" "<<s1.sem<<" "<<s1.sr<<endl;
cout<<s2.imie<<" "<<s2.naz<<" "<<s2.nr<<" "<<s2.sem<<" "<<s2.sr;

    return 324;
}

