#ifndef SASTOJAK_H
#define SASTOJAK_H
#include <iostream>
using namespace std;

class Sastojak
{
public:
    string naziv;
    int kolicina,energetskavrednost;
private:
    Sastojak konstruktor(string ime, int kol, int energ)
    {
        naziv=ime;
        kolicina=kol;
        energetskavrednost=energ;
    }

};

#endif // SASTOJAK_H
