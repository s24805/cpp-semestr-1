#include <iostream>
#include <string>
using namespace std;
class Samochod
{
    string nazwa;
    string model;
    int rok_p;
    int przebieg;
    int cenaW;
    int cenaK;

    public:
    Samochod(string, string, int, int);
    int cenaWyjsc();
    int cenaKon();
    void oferta();
};
