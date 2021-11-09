#include <iostream>
#include <windows.h>
#include <cwchar>
using namespace std;
int main()
{
int a,kolor=1;
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
cout<<"podaj liczbe do odliczania"<<endl;
cin>>a;
for(int i=0;i<=a;i++)
{cout<<a-i<<endl;
SetConsoleTextAttribute(hConsole, kolor);
kolor++;
Sleep(200);
}
cout<<"koniec";
return 69;}
