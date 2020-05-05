#ifndef KUVAR_H
#define KUVAR_H
#include <iostream>
using namespace std;

class Kuvar
{
private:
    string poreklo,kuhinja,ime;
    int rejting;///   1-10
public:
    Kuvar konstruktor(string naziv,string por,string kuh,int rej)
    {
        ime=naziv;
        poreklo=por;
        kuhinja=kuh;
        rejting=rej;
    }
};
/// rejting zavisi od kvaliteta u firmi (u planu)
#endif // KUVAR_H
