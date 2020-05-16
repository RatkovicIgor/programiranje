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
    Firma()
    {
        ime="nepoznato";
        zemljaporekla="nepoznato";
        kvalitet=0;
    }
    Firma(string naziv, string poreklo, int ok)
    {
        ime=naziv;
        zemljaporekla=poreklo;
        kvalitet=ok;
    }
    virtual void ispisikarakteristike()
    {
        cout<<ime<<", "<<zemljaporekla<<", "<<kvalitet<<"/10"<<endl;
    }
};
#endif // FIRMA_H
