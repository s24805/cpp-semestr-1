#include <iostream>

using namespace std;

class Statystyka
{
    public:
    int zawodnik=0;
    int druzyna=0;
    int liga=0;
    Statystyka();
    void czysc_ekran();
    int wczytaj_lige();
    int wczytaj_druzyne();
    int wczytaj_zawodnika();
    int wczytaj_SA();
    enum druzyny_SA
    {
     Inter=1,
     Milan=2,
     Atlanta=3,
     Juventus=4,
     Napoli=5,
     Lazio=6,
     Sassuolo=7,
     Roma=8,
     Sampodria=9,
     Verona=10,
     Genoa=11,
     Bologna=12,
     Fiorentina=13,
     Udinese=14,
     Spezia=15,
     Cagliari=16,
     Torino=17,
     Benevento=18,
     Crotone=19,
     Parma=20,
    };
    void wczytaj_inr();
    void wczytaj_mil();
    void wczytaj_atl();
    void wczytaj_juv();
    void wczytaj_nap();
    void wczytaj_laz();
    void wczytaj_rom();
    void wczytaj_sas();
    void wczytaj_sam();
    void wczytaj_wer();
    void wczytaj_gen();
    void wczytaj_bol();
    void wczytaj_fio();
    void wczytaj_udi();
    void wczytaj_spe();
    void wczytaj_cag();
    void wczytaj_tor();
    void wczytaj_ben();
    void wczytaj_cro();
    void wczytaj_par();
};
