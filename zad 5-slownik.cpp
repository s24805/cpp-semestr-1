#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int ok=0;
    string pol;
    vector <string> slow;
    for(int i=0;i<1;i--)
    {
    cout<<endl;
    cout<<"podaj polecenie:"<<endl;
    cout<<"0-wyjdz"<<endl;
    cout<<"1-dodaj slowo"<<endl;
    cout<<"2-usun slowo"<<endl;
    cout<<"3-znajdz slowo"<<endl;
    cout<<"4-wypisz wszystko"<<endl;
    cout<<"5-sortowanie alfabetyczne"<<endl;
        cin>>pol;
        if(pol=="0")
        {
            return 2134;
        }
        else if(pol=="1")
        {
            cout<<"jakie slowo chcesz dodac?"<<endl;
            cin>>pol;
            if(pol.empty())
                cout<<"podana pusta linijka"<<endl;
            slow.push_back(pol);
        }
        else if(pol=="3")
        {
            cout<<"jakie slowo chcesz znalezc?"<<endl;
            cin>>pol;
            if(pol.empty())
                cout<<"podana pusta linijka"<<endl;
            if(slow.size()==0)
                cout<<" nie ma niczego w slowniku"<<endl;
            for(int i=0;i<slow.size();i++)
            {
                if(slow[i]==pol)
                {
                   cout<<"podane slowo jest na miejscu: "<<++i<<endl;
                   ok=1;
                }
            }
            if(ok==0)
                cout<<"nie ma podanego slowa w slownkiu"<<endl;
        }
        else if(pol=="2")
        {
                if(slow.size()==0)
                cout<<" nie ma niczego w slowniku"<<endl;
            cout<<"jakie slowo chcesz usunac?"<<endl;
            cin>>pol;
            if(pol.empty())
                cout<<"podana pusta linijka"<<endl;
                for(int i=0;i<slow.size();i++)
            {
                if(slow[i]==pol)
                {
                   slow.erase(slow.begin()+i);
                   ok=1;
                }
            }
            if(ok==0)
                cout<<"nie ma podanego slowa w slownkiu"<<endl;
        }
        else if(pol=="4")
        {
                if(slow.size()==0)
                cout<<" nie ma niczego w slowniku"<<endl;
            for(int i=0;i<slow.size();i++)
                cout<<slow[i]<<endl;
        }
        else if(pol=="5")
        {
                if(slow.size()==0)
                cout<<" nie ma niczego w slowniku"<<endl;
             sort( slow.begin(), slow.end() );
            for( int i=0;i<slow.size();i++ )
                {
                cout<<slow[i]<<endl;
                }
        }
        else
            cout<<"zle podane wyrazenie";
    }
    return 123414;
}
