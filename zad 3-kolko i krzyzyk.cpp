#include <iostream>
#include <cwchar>
#include <windows.h>
using namespace std;
int main()
{
    // kolor 12-czerw kolo 8-szary 9-nieb krzyz 10-ziel
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    string T[3][3];
    int x,y,ok=0;
    int ruch=1;
    for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++)
    {
        T[i][j]="_";
    }}
    for(ruch;ruch<10;ruch++)
{
    SetConsoleTextAttribute(hConsole, 10);
    for(int jd=0;jd<3;jd++)
    {
        if(T[0][jd]==T[2][jd] && T[2][jd]==T[1][jd] && T[2][jd]=="x")
        {cout<<"w "<<ruch<<" ruchach wygrywa krzyzyk";
        return 24;}
        if(T[jd][0]==T[jd][1] && T[jd][0]==T[jd][2] && T[jd][0]=="x")
        {cout<<"w "<<ruch<<" ruchach wygrywa krzyzyk";
        return 24;}
        if(T[0][0]==T[1][1] && T[0][0]==T[2][2] && T[0][0]=="x")
        {cout<<"w "<<ruch<<" ruchach wygrywa krzyzyk";
        return 24;}
        if(T[0][2]==T[1][1] && T[0][0]==T[2][0] && T[0][0]=="x")
        {cout<<"w "<<ruch<<" ruchach wygrywa krzyzyk";
        return 24;
    }}
     for(int jd=0;jd<3;jd++)
    {
        if(T[0][jd]==T[2][jd] && T[2][jd]==T[1][jd] && T[2][jd]=="o")
        {cout<<"w "<<ruch<<"ruchach wygrywa kolo";
        return 24;}
        if(T[jd][0]==T[jd][1] && T[jd][0]==T[jd][2] && T[jd][0]=="o")
        {cout<<"w "<<ruch<<" ruchach wygrywa kolo";
        return 24;}
        if(T[0][0]==T[1][1] && T[0][0]==T[2][2] && T[0][0]=="o")
        {cout<<"w "<<ruch<<" ruchach wygrywa kolo";
        return 24;}
        if(T[0][2]==T[1][1] && T[0][0]==T[2][0] && T[0][0]=="o")
        {cout<<"w "<<ruch<<" ruchach wygrywa kolo";
        return 24;}
    }
    if(ruch%2==1)
    {
        cout<<"ruch kola"<<endl;
    }
    else
    {
        cout<<"ruch krzyzyka"<<endl;
    }
    cout<<"Podaj wiersz (od 0 do 2)"<<endl;
    cin>>x;
    cout<<"Podaj kolumne (od 0 do 2)"<<endl;
    cin>>y;
    if(T[x][y]=="x" || T[x][y]=="o" || x>=3 || y>=3)
    while(ok=1)
{
    cout<<"To pole jest juz zajete lub dane sa zle wpisane"<<endl;
    cout<<"Podaj ponownie x"<<endl;
    cin>>x;
    cout<<"Podaj ponownie y"<<endl;
    cin>>y;
    if(T[x][y]!="x" || T[x][y]!="o")
        break;
}
    if(ruch%2==1)
        T[x][y]="o";
    else
        T[x][y]="x";
    for(int i=0;i<3;i++)
        {for(int j=0;j<3;j++)
    {
        if(T[i][j]=="_")
        SetConsoleTextAttribute(hConsole,8);
        if(T[i][j]=="x")
        SetConsoleTextAttribute(hConsole,9);
        if(T[i][j]=="o")
        SetConsoleTextAttribute(hConsole,12);
        cout<<T[i][j]<<" ";
    }
    cout<<endl;
        }
 }
    cout<<endl;

return 6456;
}
