#include <iostream>
using namespace std;
int main()
{
    string a;
    int dl,men=0,kob=0;
    cout<<"podaj 5 imion"<<endl;
for(int i=0;i<5;i++)
{
    dl=0;
    cin>>a;
    dl=a.size();
    if(a[dl-1]=='a')
        kob++;
    else men++;
}
cout<<"meskich jest: "<<men<<endl;
cout<<"damskich jest: "<<kob<<endl;
return 213;
}


