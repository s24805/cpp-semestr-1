#include <iostream>
#include "byle co.h"
using namespace std;

int main()
{
    Samochod autko("BMW","V2",1990,10000);
    autko.cenaWyjsc();
    autko.cenaKon();
    autko.oferta();
    Samochod autko1("Skoda","Siusiu",2000,19000);
    autko1.cenaWyjsc();
    autko1.cenaKon();
    autko1.oferta();
    return 0;
}
