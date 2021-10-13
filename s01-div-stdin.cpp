#include <iostream>
#include <string>
auto ask_user_for_integer( std :: string prompt ) -> int
{
std :: cout << prompt << " int :";
auto n = std :: string {};
std :: getline ( std :: cin , n );
return std :: stoi ( n );
}
auto main () -> int
{
float a = ask_user_for_integer ("a=");
float b = ask_user_for_integer ("b=");
if(b==0)
std :: cout<<"nie dzieli sie pzrezz 0"<<"\n";
else
std :: cout <<(a/b)<< "\n";

return 0;
}
