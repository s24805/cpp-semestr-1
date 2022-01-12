#include <iostream>
#include <vector>
#include <string>
using namespace std;
vector <string> split(string zda)
{
    string a="";
    vector <string> k;
   for(int i=0;i<zda.size();i++)
   {
       if(zda[i]==' ')
       {
           k.push_back(a);
           a="";
           continue;
       }
       else if(i==zda.size()-1)
       {
           k.push_back(a);
       }
       else
        a+=zda[i];
   }
  return k;
}
int main()
{
    string zda;
    cout<<"wpisz zdanie"<<endl;
    getline (cin,zda);
    split(zda);
    vector <string> k=split(zda);
     for(int i=0;i<k.size();i++)
   {
       cout<<"'"<<k[i]<<"' ";
   }
    return 1234;
}
