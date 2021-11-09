#include <iostream>
#include <string>
using namespace std;
int main()
{
    string jd;
    unsigned int a,pom,x,y,h;
    struct pora
    {
        unsigned int sek,mn,godz;
    };
    struct slonce
    {
        string noc,rano,dzien,wieczor;
    };
    struct pora s1;
    struct slonce p1;
    p1.noc="noc (20.00-5.00)";
    p1.rano="rano (5.00-10.00)";
    p1.dzien="dzien (10.00-16.00)";
    p1.wieczor="wieczor (16.00-19.00)";
cout<<"podaj godzine"<<endl;
cin>>s1.godz;
if(s1.godz>23)
{
    cout<<"zle dane (godz)"<<endl;
    return 0;
}
cout<<"podaj min"<<endl;
cin>>s1.mn;
if(s1.mn>59)
{
    cout<<"zle dane (min)"<<endl;
    return 0;
}
cout<<"podaj sek"<<endl;
cin>>s1.sek;
if(s1.sek>59)
{
    cout<<"zle dane (sek)"<<endl;
    return 0;
}
for(int i=0;i<10;i--)
{
    //tak wiem to niekonczonca sie petla
    cout<<"Co chcesz powiekszyc? (godz,min,sek, czy nic)"<<endl;
    cin>>jd;
     if(jd=="nic")
    {
        cout<<"aktualna godzina to:"<<s1.godz<<":"<<s1.mn<<":"<<s1.sek<<endl;
        return 9;
    }
    if(jd !="sek" && jd !="min" && jd!="godz" && jd!="nic")
{
    cout<<"zle wpisana wartosc";
    return 543;
}
    cout<<"o ile?"<<endl;
cin>>a;
    if(jd=="godz")
    {
        if(s1.godz+a>23)
            s1.godz=s1.godz+a-24;
        else s1.godz+=a;
    }
     if(jd=="min")
    {
        if(s1.mn+a>59)
           {
               h=(a+s1.mn-(a%60))/60;
               x=(a+s1.mn)%60;
               if(s1.godz+h==s1.godz && a!=0)
                s1.godz++;
               //    h=(a-(a%60))/60;
            s1.mn=x;
            x=0;
        if(s1.godz+h>23)
        {
            x=(s1.godz+h)%24;
            s1.godz=x;
        }
        else
            s1.godz+=h;
            y=0;
           pom=0;
           x=0;
           h=0;
           }
        else s1.mn+=a;
    }
     if(jd=="sek")
    {
if(s1.sek+a>59)
           {
               if(s1.sek+a>59)
           {
               h=(a+s1.sek-(a%60))/60;
               x=(a+s1.sek)%60;
               if(s1.mn+h==s1.mn && a!=0)
                s1.mn++;
               //    h=(a-(a%60))/60;
            s1.sek=x;
            x=0;
        if(s1.mn+h>59)
        {
            pom=(h+s1.mn-(h%60))/60;
            x=(s1.mn+h)%60;
            s1.mn=x;
            if(s1.godz+x>23)
        {
            pom=(x+s1.godz)%60;
            s1.godz=pom;
        }
        else
            s1.godz+=x;
        }
        else
            s1.mn+=h;
        }
        else
            s1.sek+=a;
            y=0;
           pom=0;
           x=0;
           h=0;}
    else
    s1.sek+=a;
}
if(s1.godz<10)
cout<<"aktualna godzina to:  0"<<s1.godz<<":";
else
    cout<<"aktualna godzina to:  "<<s1.godz<<":";
if(s1.mn<10)
    cout<<"0"<<s1.mn;
else
    cout<<s1.mn;
if(s1.sek<10)
cout<<":"<<"0"<<s1.sek<<endl;
else
    cout<<":"<<s1.sek<<endl;

cout<<"Pora dnia: ";
        if(s1.godz<=4 || s1.godz>=19 )
        cout<<p1.noc;
        if(s1.godz>=5 && s1.godz<=9 )
        cout<<p1.rano;
        if(s1.godz>=10 && s1.godz<=15 )
        cout<<p1.dzien;
        if(s1.godz>=16 && s1.godz<19 )
        cout<<p1.wieczor;

cout<<endl<<"godziny, minuty i sekundy po polnocy "<<s1.godz<<"h  "<<s1.mn<<"min  "<<s1.sek<<"sek";
cout<<endl<<"godziny, minuty i sekundy do polnocy "<<23-s1.godz<<"h  "<<59-s1.mn<<"min  "<<60-s1.sek<<"sek";
cout<<endl<<"zakonczyc program?(t/n)"<<endl;
cin>>jd;
if(jd=="t")
return 345;
}
    return 324;
}

