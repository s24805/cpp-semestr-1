#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Student
{
    public:
    string imie;
    string nazwisko;
    vector <float> oceny;
};

class Grupa
{
    public:
    string nazwa;
    vector <Student> studenci;
};

void dodaj(Grupa testowa, Student testowy)
{
    testowa.studenci.push_back(testowy);
}
int main()
{
    Grupa testowa;
    test.nazwa="18c";

    Student testowy;
    testowy.imie="Dawid";
    testowy.nazwisko="Poplawski";
    testowy.oceny={4,4,5};

    dodaj(testowa,testowy);

    return 0;
}
