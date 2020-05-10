#ifndef SASTOJAK_H
#define SASTOJAK_H
#include <iostream>
using namespace std;

class Sastojak
{
private:
    string naziv;
    int energetskavrednost;
public:
    Sastojak(string ime, int energ)
    {
        naziv=ime;
        energetskavrednost=energ;
    }

};

#endif // SASTOJAK_H
