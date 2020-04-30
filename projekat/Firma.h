#ifndef FIRMA_H
#define FIRMA_H
#include <iostream>
using namespace std;

class Firma
{
private:
    string ime,zemljaporekla;
    int kvalitet;///  1-10
public:
    Firma konstruktor(string naziv, string poreklo, int ok)
    {
        ime=naziv;
        zemljaporekla=poreklo;
        kvalitet=ok;
    }

};
/// treba da je nasledjuju sporet i rerna (u planu)
#endif // FIRMA_H
