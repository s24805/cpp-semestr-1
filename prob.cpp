#include <iostream>
using namespace std;
int main()
{
    class pora
    {
    public:;
        int hour,mn,sec;
        void next_hour(int h,int hour)
        {
            cout<<"ile godzin chcesz dodac?"<<endl;
            cin>>h;
            if(hour+=h<24) hour+=h;
            else hour=hour+h-24;
        }
        void next_minute(int m,int hour,int mn)
        {
            cout<<"ile min chcesz dodac?"<<endl;
            cin>>m;
            if(mn+=m<60) mn+=m;
            else mn+m-60;
        }
                void next_second(int m,int hour,int mn)
        {
            cout<<"ile sek chcesz dodac?"<<endl;
            cin>>m;
            if(mn+=m<60) mn+=m;
            else mn+m-60;
        }
    };


return 435;}
